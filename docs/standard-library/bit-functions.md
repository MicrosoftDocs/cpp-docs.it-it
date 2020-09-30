---
title: '&lt;funzioni di bit &gt;'
description: Funzioni per l'accesso, la manipolazione e l'elaborazione di singoli bit e sequenze di bit
ms.date: 08/28/2020
f1_keywords:
- bit/std::bit_cast
- bit/std::has_single_bit
- bit/std::bit_ceil
- bit/std::bit_floor
- bit/std::bit_width
- bit/std::rotl
- bit/std::rotr
- bit/std::countl_zero
- bit/std::countl_one
- bit/std::countr_zero
- bit/std::countr_one
- bit/std::popcount
helpviewer_keywords:
- std::bit [C++], bit_cast
- std::bit [C++], has_single_bit
- std::bit [C++], bit_ceil
- std::bit [C++], bit_floor
- std::bit [C++], bit_width
- std::bit [C++], rotl
- std::bit [C++], rotr
- std::bit [C++], countl_zero
- std::bit [C++], countl_one
- std::bit [C++], countr_zero
- std::bit [C++], countr_one
- std::bit [C++], popcount
ms.openlocfilehash: 94e44493b9356b3a0717c42aa1bed510ebe460dd
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91509987"
---
# <a name="ltbitgt-functions"></a>&lt;funzioni di bit &gt;

L' \<bit> intestazione include le funzioni del modello non membro seguenti:

| **Funzioni non membro** | **Descrizione** |
|--------|---------|
|[bit_cast](#bit_cast) | Reinterpretare la rappresentazione dell'oggetto da un tipo a un altro. |
|[bit_ceil](#bit_ceil) | Trovare la potenza minima di due maggiori o uguali a un valore. |
|[bit_floor](#bit_floor) | Trovare la potenza massima di due non maggiore di un valore. |
|[bit_width](#bit_width) | Trovare il numero più piccolo di bit necessari per rappresentare un valore. |
|[countl_zero](#countl_zero) | Contare il numero di bit consecutivi impostati su zero, a partire dal bit più significativo. |
|[countl_one](#countl_one) | Contare il numero di bit consecutivi impostati su uno, a partire dal bit più significativo. |
|[countr_zero](#countr_zero) | Contare il numero di bit consecutivi impostati su zero, a partire dal bit meno significativo. |
|[countr_one](#countl_one) | Contare il numero di bit consecutivi impostati su uno, iniziando dal bit meno significativo. |
|[has_single_bit](#has_single_bit) | Controllare se un valore ha un solo bit impostato su uno. Equivale a verificare se un valore è una potenza di due. |
|[popcount](#popcount) | Contare il numero di bit impostati su uno. |
|[rotl](#rotl) | Calcola il risultato di una rotazione a sinistra bit per bit. |
|[rotr](#rotr) | Calcola il risultato di una rotazione a destra bit per bit. |

## <a name="bit_cast"></a>`bit_cast`

Copiare uno schema di bit da un oggetto di tipo `From` in un nuovo oggetto di tipo `To` .

```cpp
template <class To, class From>
[[nodiscard]] constexpr To bit_cast(const From& from) noexcept;
```

### <a name="parameters"></a>Parametri

*A*\
Tipo dell'output.

*Da*\
Tipo del valore da convertire.

*Da*\
Valore da convertire.

### <a name="return-value"></a>Valore restituito

Oggetto di tipo `To`.

Ogni bit nel risultato corrisponde al bit corrispondente in a `from` meno che non siano presenti bit di riempimento in `To` , nel qual caso questi bit nel risultato non sono specificati.

### <a name="example"></a>Esempio

```cpp
#include <bit>
#include <iostream>

int main()
{
    float f = std::numeric_limits<float>::infinity();
    int i = std::bit_cast<int>(f);
    std::cout << "float f = " << std::hex << f
              << "\nstd::bit_cat<int>(f) = " << std::hex << i << '\n';
    return 0;
}
```

```Output
float f = inf
std::bit_cat<int>(f) = 7f800000
```

### <a name="remarks"></a>Osservazioni

Il codice di basso livello deve spesso interpretare un oggetto di un tipo come un altro tipo. L'oggetto reinterpretato ha la stessa rappresentazione di bit dell'originale, ma è un tipo diverso.

Invece di usare `reinterpret_cast` , o `memcpy()` , `bit_cast()` è un modo migliore per eseguire queste conversioni. È preferibile:

- `bit_cast()` è `constexpr`
- `bit_cast()` richiede che i tipi siano facilmente copiabili e le stesse dimensioni. In questo modo si evitano potenziali problemi che è possibile riscontrare usando `reinterpret_cast` e `memcpy` perché potrebbero essere usati per inavvertitamente e in modo non corretto, per convertire i tipi non facilmente copiabili. Inoltre, `memcpy()` può essere usato per copiare inavvertitamente tra tipi che non hanno le stesse dimensioni. Ad esempio, un valore Double (8 byte) in un int senza segno (4 byte) o viceversa.

Questo overload partecipa solo alla risoluzione dell'overload se:

- `sizeof(To) == sizeof(From)`
- `To` e `From` sono [is_trivially_copyable](is-trivially-copyable-class.md).

Questo modello di funzione è `constexpr` se e solo se `To` , `From` e i tipi dei relativi oggetti suboggetto sono:

- non è un tipo di Unione o puntatore
- non è un puntatore a un tipo di membro
- non qualificato per volatile
- non dispone di un membro dati non statico che è un tipo di riferimento

## <a name="bit_ceil"></a>`bit_ceil`

Trovare la potenza minima di due maggiori o uguali a un valore. Dato, ad esempio `3` , restituisce `4` .

```cpp
template<class T>
[[nodiscard]] constexpr T bit_ceil(T value);
```

### <a name="parameters"></a>Parametri

*valore*\
Valore Unsigned Integer da verificare.

### <a name="return-value"></a>Valore restituito

 La potenza minima di due maggiori o uguali a `value` .

### <a name="example"></a>Esempio

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    for (auto i = 0u; i < 6u; ++i) // bit_ceil() takes an unsigned integer type
    {
        auto nextClosestPowerOf2 = std::bit_ceil(i);
        std::cout << "\nbit_ceil(0b" << std::bitset<4>(i) << ") = "
                  << "0b" << std::bitset<4>(nextClosestPowerOf2);
    }
    return 0;
}
```

```Output
bit_ceil(0b0000) = 0b0001
bit_ceil(0b0001) = 0b0001
bit_ceil(0b0010) = 0b0010
bit_ceil(0b0011) = 0b0100
bit_ceil(0b0100) = 0b0100
bit_ceil(0b0101) = 0b1000
```

### <a name="remarks"></a>Osservazioni

Questa funzione di modello partecipa solo alla risoluzione dell'overload se `T` è un tipo di Unsigned Integer. Ad esempio: `unsigned int` , `unsigned long` , `unsigned short` , `unsigned char` e così via.

## <a name="bit_floor"></a>`bit_floor`

Trovare la potenza massima di due non maggiore di un valore. Dato, ad esempio `5` , restituisce `4` .

```cpp
template< class T >
[[nodiscard]] constexpr T bit_floor(T value) noexcept;
```

### <a name="parameters"></a>Parametri

*valore*\
Valore Unsigned Integer da verificare.

### <a name="return-value"></a>Valore restituito

La potenza massima di due non è maggiore di `value` . \
Se `value` è zero, restituisce zero.

### <a name="example"></a>Esempio

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    for (auto i = 0u; i < 6u; ++i) // bit_floor() takes an unsigned integer type
    {
        auto previousPowerOf2 = std::bit_floor(i);
        std::cout << "\nbit_floor(0b" << std::bitset<4>(i) << ") = 0b"
                  << std::bitset<4>(previousPowerOf2);
    }
    return 0;
}
```

```Output
bit_floor(0b0000) = 0b0000
bit_floor(0b0001) = 0b0001
bit_floor(0b0010) = 0b0010
bit_floor(0b0011) = 0b0010
bit_floor(0b0100) = 0b0100
bit_floor(0b0101) = 0b0100
```

### <a name="remarks"></a>Osservazioni

Questa funzione di modello partecipa solo alla risoluzione dell'overload se `T` è un tipo di Unsigned Integer. Ad esempio: `unsigned int` , `unsigned long` , `unsigned short` , `unsigned char` e così via.

## <a name="bit_width"></a>`bit_width`

Trovare il numero più piccolo di bit necessari per rappresentare un valore.

Ad esempio, dato 5 (0b101), restituisce 3 perché impiega 3 bit binari per esprimere il valore 5.

```cpp
template<class T>
[[nodiscard]] constexpr T bit_width(T value) noexcept;
```

### <a name="parameters"></a>Parametri

*valore*\
Valore Unsigned Integer da verificare.

### <a name="return-value"></a>Valore restituito

Numero di bit necessari per rappresentare `value` . \
Se `value` è zero, restituisce zero.

### <a name="example"></a>Esempio

```cpp
#include <bit>
#include <iostream>

int main()
{
    for (unsigned i=0u; i <= 8u; ++i)
    {
        std::cout << "\nbit_width(" << i << ") = "
                  << std::bit_width(i);
    }
    return 0;
}
```

```Output
bit_width(0) = 0
bit_width(1) = 1
bit_width(2) = 2
bit_width(3) = 2
bit_width(4) = 3
bit_width(5) = 3
bit_width(6) = 3
bit_width(7) = 3
bit_width(8) = 4
```

### <a name="remarks"></a>Osservazioni

Questa funzione di modello partecipa solo alla risoluzione dell'overload se `T` è un tipo di Unsigned Integer. Ad esempio: `unsigned int` , `unsigned long` , `unsigned short` , `unsigned char` e così via.

## <a name="countl_zero"></a>`countl_zero`

Contare il numero di bit consecutivi impostati su zero, a partire dal bit più significativo.

```cpp
template<class T>
[[nodiscard]] constexpr int countl_zero(T value) noexcept;
```

### <a name="parameters"></a>Parametri

*valore*\
Valore Unsigned Integer da verificare.

### <a name="return-value"></a>Valore restituito

Numero di bit zero consecutivi, a partire dal bit più significativo. \
Se `value` è zero, il numero di bit nel tipo di `value` .

### <a name="example"></a>Esempio

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    for (unsigned char result = 0, i = 0; i < 9; i++)
    {
        std::cout << "\ncountl_zero(0b" << std::bitset<8>(result) << ") = " << std::countl_zero(result);
        result = result == 0 ? 1 : result * 2;
    }
    return 0;
}
```

```Output
countl_zero(0b00000000) = 8
countl_zero(0b00000001) = 7
countl_zero(0b00000010) = 6
countl_zero(0b00000100) = 5
countl_zero(0b00001000) = 4
countl_zero(0b00010000) = 3
countl_zero(0b00100000) = 2
countl_zero(0b01000000) = 1
countl_zero(0b10000000) = 0
```

### <a name="remarks"></a>Osservazioni

Questa funzione di modello partecipa solo alla risoluzione dell'overload se `T` è un tipo di Unsigned Integer. Ad esempio: `unsigned int` , `unsigned long` , `unsigned short` , `unsigned char` e così via.

## <a name="countl_one"></a>`countl_one`

Contare il numero di bit consecutivi impostati su uno, a partire dal bit più significativo.

```cpp
template<class T>
[[nodiscard]] constexpr int countl_one(T value) noexcept;
```

### <a name="parameters"></a>Parametri

*valore*\
Valore Unsigned Integer da verificare.

### <a name="return-value"></a>Valore restituito

Numero di bit consecutivi impostati su uno, a partire dal bit più significativo.

### <a name="example"></a>Esempio

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    unsigned char value = 0;
    for (unsigned char bit = 128; bit > 0; bit /= 2)
    {
        value |= bit;
        std::cout << "\ncountl_one(0b" << std::bitset<8>(value) << ") = "
                  << std::countl_one(value);
    }
    return 0;
}
```

```Output
countl_one(0b10000000) = 1
countl_one(0b11000000) = 2
countl_one(0b11100000) = 3
countl_one(0b11110000) = 4
countl_one(0b11111000) = 5
countl_one(0b11111100) = 6
countl_one(0b11111110) = 7
countl_one(0b11111111) = 8
```

### <a name="remarks"></a>Osservazioni

Questa funzione di modello partecipa solo alla risoluzione dell'overload se `T` è un tipo di Unsigned Integer. Ad esempio: `unsigned int` , `unsigned long` , `unsigned short` , `unsigned char` e così via.

## <a name="countr_zero"></a>`countr_zero`

Contare il numero di bit consecutivi impostati su zero, a partire dal bit meno significativo.

```cpp
template<class T>
[[nodiscard]] constexpr int countr_zero(T value) noexcept;
```

### <a name="parameters"></a>Parametri

*valore*\
Valore Unsigned Integer da verificare.

### <a name="return-value"></a>Valore restituito

Numero di bit zero consecutivi, a partire dal bit meno significativo. \
Se `value` è zero, il numero di bit nel tipo di `value` .

### <a name="example"></a>Esempio

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    for (unsigned char result = 0, i = 0; i < 9; i++)
    {
        std::cout << "\ncountr_zero(0b" << std::bitset<8>(result) << ") = "
                  << std::countr_zero(result);
        result = result == 0 ? 1 : result * 2;
    }
    return 0;
}
```

```Output
countr_zero(0b00000000) = 8
countr_zero(0b00000001) = 0
countr_zero(0b00000010) = 1
countr_zero(0b00000100) = 2
countr_zero(0b00001000) = 3
countr_zero(0b00010000) = 4
countr_zero(0b00100000) = 5
countr_zero(0b01000000) = 6
countr_zero(0b10000000) = 7
```

### <a name="remarks"></a>Osservazioni

Questa funzione di modello partecipa solo alla risoluzione dell'overload se `T` è un tipo di Unsigned Integer. Ad esempio: `unsigned int` , `unsigned long` , `unsigned short` , `unsigned char` e così via.

## <a name="countr_one"></a>`countr_one`

Contare il numero di bit consecutivi impostati su uno, iniziando dal bit meno significativo.

```cpp
template<class T>
[[nodiscard]] constexpr int countr_one(T value) noexcept;
```

### <a name="parameters"></a>Parametri

*valore*\
Valore Unsigned Integer da verificare.

### <a name="return-value"></a>Valore restituito

Numero di bit consecutivi impostati su uno, a partire dal bit meno significativo.

### <a name="example"></a>Esempio

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    unsigned char value = 0;
    for (int bit = 1; bit <= 128; bit *= 2)
    {
        value |= bit;
        std::cout << "\ncountr_one(0b" << std::bitset<8>(value) << ") = "
                  << std::countr_one(value);
    }
    return 0;
}
```

```Output
countr_one(0b00000001) = 1
countr_one(0b00000011) = 2
countr_one(0b00000111) = 3
countr_one(0b00001111) = 4
countr_one(0b00011111) = 5
countr_one(0b00111111) = 6
countr_one(0b01111111) = 7
countr_one(0b11111111) = 8
```

### <a name="remarks"></a>Osservazioni

Questa funzione di modello partecipa solo alla risoluzione dell'overload se `T` è un tipo di Unsigned Integer. Ad esempio: `unsigned int` , `unsigned long` , `unsigned short` , `unsigned char` e così via.

## <a name="has_single_bit"></a>`has_single_bit`

Verificare se per un valore è impostato un solo bit. Equivale a verificare se un valore è una potenza di due.

```cpp
template <class T>
[[nodiscard]] constexpr bool has_single_bit(T value) noexcept;
```

### <a name="parameters"></a>Parametri

*valore*\
Valore Unsigned Integer da verificare.

### <a name="return-value"></a>Valore restituito

`true` Se `value` dispone di un solo bit impostato che significa anche che `value` è una potenza di due. In caso contrario, `false`.

### <a name="example"></a>Esempio

```cpp
#include <bit>
#include <bitset>
#include <iostream>
#include <iomanip>

int main()
{
    for (auto i = 0u; i < 10u; ++i)
    {
        std::cout << "has_single_bit(0b" << std::bitset<4>(i) << ") = "
                  << std::boolalpha << std::has_single_bit(i) << '\n';
    }
    return 0;
}
```

```Output
has_single_bit(0b0000) = false
has_single_bit(0b0001) = true
has_single_bit(0b0010) = true
has_single_bit(0b0011) = false
has_single_bit(0b0100) = true
has_single_bit(0b0101) = false
has_single_bit(0b0110) = false
has_single_bit(0b0111) = false
has_single_bit(0b1000) = true
has_single_bit(0b1001) = false
```

### <a name="remarks"></a>Osservazioni

Questa funzione di modello partecipa solo alla risoluzione dell'overload se `T` è un tipo di Unsigned Integer. Ad esempio: `unsigned int` , `unsigned long` , `unsigned short` , `unsigned char` e così via.

## <a name="popcount"></a>`popcount`

Contare il numero di bit impostati su uno in un valore Unsigned Integer.

```cpp
template<class T>
[[nodiscard]] constexpr int popcount(T value) noexcept;
```

### <a name="parameters"></a>Parametri

*valore*\
Valore Unsigned Integer da verificare.

### <a name="return-value"></a>Valore restituito

Bit numerici impostati su uno in `value` .

### <a name="example"></a>Esempio

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
   for (unsigned char value = 0; value < 16; value++)
    {
        std::cout << "\npopcount(0b" << std::bitset<4>(value) << ") = "
                  << std::popcount(value);
    }
    return 0;
}
```

```Output
popcount(0b0000) = 0
popcount(0b0001) = 1
popcount(0b0010) = 1
popcount(0b0011) = 2
popcount(0b0100) = 1
popcount(0b0101) = 2
popcount(0b0110) = 2
popcount(0b0111) = 3
popcount(0b1000) = 1
popcount(0b1001) = 2
popcount(0b1010) = 2
popcount(0b1011) = 3
popcount(0b1100) = 2
popcount(0b1101) = 3
popcount(0b1110) = 3
popcount(0b1111) = 4
```

### <a name="remarks"></a>Osservazioni

Questa funzione di modello partecipa solo alla risoluzione dell'overload se `T` è un tipo di Unsigned Integer. Ad esempio: `unsigned int` , `unsigned long` , `unsigned short` , `unsigned char` e così via.

## <a name="rotl"></a>`rotl`

Ruota i bit di un valore di Unsigned Integer a sinistra del numero di volte specificato. I bit che "rientrano" del bit più a sinistra vengono ruotati nel bit più a destra.

```cpp
template<class T>
[[nodiscard]] constexpr T rotl(T value, int s) noexcept;
```

### <a name="parameters"></a>Parametri

*valore*\
Valore Unsigned Integer da ruotare.

*s*\
Numero di rotazioni a sinistra da eseguire.

### <a name="return-value"></a>Valore restituito

Risultato della rotazione di `value` Left, `s` times. \
Se `s` è zero, restituisce `value` . \
Se `s` è negativo, è `rotr(value, -s)` . I bit che "rientrano" del bit più a destra vengono ruotati nel bit più a sinistra.

### <a name="example"></a>Esempio

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    unsigned char bits = 1;
    for (int i = 0; i < 8; ++i)
    {
        std::cout << "rotl(0b" << std::bitset<8>(bits) << ", 1) = ";
        bits = std::rotl(bits, 1);
        std::cout << "0b" << std::bitset<8>(bits) << '\n';
    }
    std::cout << "rotl(0b" << std::bitset<8>(bits) << ",-1) = ";
    bits = std::rotl(bits, -1);
    std::cout << "0b" << std::bitset<8>(bits);
    return 0;
}
```

```Output
rotl(0b00000001, 1) = 0b00000010
rotl(0b00000010, 1) = 0b00000100
rotl(0b00000100, 1) = 0b00001000
rotl(0b00001000, 1) = 0b00010000
rotl(0b00010000, 1) = 0b00100000
rotl(0b00100000, 1) = 0b01000000
rotl(0b01000000, 1) = 0b10000000
rotl(0b10000000, 1) = 0b00000001
rotl(0b00000001,-1) = 0b10000000
```

### <a name="remarks"></a>Osservazioni

Questa funzione di modello partecipa solo alla risoluzione dell'overload se `T` è un tipo di Unsigned Integer. Ad esempio: `unsigned int` , `unsigned long` , `unsigned short` , `unsigned char` e così via.

## <a name="rotr"></a>`rotr`

Ruota i bit di `value` destra del numero di volte specificato. I bit che "rientrano" del bit più a destra vengono ruotati di nuovo nel bit più a sinistra.

```cpp
template<class T>
[[nodiscard]] constexpr T rotr(T value, int s) noexcept;
```

### <a name="parameters"></a>Parametri

*valore*\
Valore Unsigned Integer da ruotare.

*s*\
Numero di rotazioni a destra da eseguire.

### <a name="return-value"></a>Valore restituito

Risultato della rotazione a `value` destra, `s` volte. \
Se `s` è zero, restituisce `value` . \
Se `s` è negativo, è `rotl(value, -s)` . I bit che "rientrano" del bit più a sinistra vengono ruotati di nuovo nel bit più a destra.

### <a name="example"></a>Esempio

```cpp
#include <bit>
#include <bitset>
#include <iostream>

int main()
{
    unsigned char bits = 128;
    for (int i = 0; i < 8; ++i)
    {
        std::cout << "rotr(0b" << std::bitset<8>(bits) << ", 1) = ";
        bits = std::rotr(bits, 1);
        std::cout << "0b" << std::bitset<8>(bits) << '\n';
    }
    std::cout << "rotr(0b" << std::bitset<8>(bits) << ",-1) = ";
    bits = std::rotr(bits, -1);
    std::cout << "0b" << std::bitset<8>(bits);
    return 0;
}
```

```Output
rotr(0b10000000, 1) = 0b01000000
rotr(0b01000000, 1) = 0b00100000
rotr(0b00100000, 1) = 0b00010000
rotr(0b00010000, 1) = 0b00001000
rotr(0b00001000, 1) = 0b00000100
rotr(0b00000100, 1) = 0b00000010
rotr(0b00000010, 1) = 0b00000001
rotr(0b00000001, 1) = 0b10000000
rotr(0b10000000,-1) = 0b00000001
```

### <a name="remarks"></a>Osservazioni

Questa funzione di modello partecipa solo alla risoluzione dell'overload se `T` è un tipo di Unsigned Integer. Ad esempio: `unsigned int` , `unsigned long` , `unsigned short` , `unsigned char` e così via.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<bit>

**Spazio dei nomi:** std

[/std: c + + Latest](../build/reference/std-specify-language-standard-version.md) è obbligatorio.

## <a name="see-also"></a>Vedere anche

[\<bit>](bit.md)
