# URL of your verification page
url = "https://www.study4abetterfuture.uk"

# Create QR code object
qr = qrcode.QRCode(
    version=3,
    error_correction=qrcode.constants.ERROR_CORRECT_H,
    box_size=10,
    border=4,
)

# Add URL data
qr.add_data(url)
qr.make(fit=True)

# Create image
img = qr.make_image(fill_color="black", back_color="white")

# Save image as PNG
img.save("diploma_qr.png")