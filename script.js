function check() {
    let v = document.getElementById("value").value;

    if (v > 500) {
        document.getElementById("result").innerHTML = "⚠ High Risk";
    } else {
        document.getElementById("result").innerHTML = "✅ Safe";
    }
}
