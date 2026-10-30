let tas = ["pedang kayu", "perisai besi"];
tas.splice(0, 0, "potion darah"); // Menyisipkan di indeks 0
tas.splice(2, 0, "busur panah"); // Menyisipkan di indeks 2
tas.pop();                       // Menghapus elemen terakhir

console.log("hasil akhir:", tas);
