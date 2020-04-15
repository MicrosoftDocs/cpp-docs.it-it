---
title: Typedef &lt;fstream&gt;
ms.date: 11/04/2016
f1_keywords:
- fstream/std::filebuf
- fstream/std::fstream
- fstream/std::ifstream
- fstream/std::ofstream
- fstream/std::wfilebuf
- fstream/std::wfstream
- fstream/std::wifstream
- fstream/std::wofstream
ms.assetid: 8dddef2d-7f17-42a6-ba08-6f6f20597d23
ms.openlocfilehash: 57e481c131a6e4a1111b1ed88217b891d6fc96a8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317185"
---
# <a name="ltfstreamgt-typedefs"></a>Typedef &lt;fstream&gt;

||||
|-|-|-|
|[filebuf](#filebuf)|[fstream](#fstream)|[ifstream](#ifstream)|
|[ofstream](#ofstream)|[wfilebuf](#wfilebuf)|[wfstream (file wfstream)](#wfstream)|
|[wifstream](#wifstream)|[wofstream](#wofstream)|

## <a name="filebuf"></a><a name="filebuf"></a>filebuf (filebuf)

Tipo `basic_filebuf` specializzato nei parametri del modello **char.**

```cpp
typedef basic_filebuf<char, char_traits<char>> filebuf;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di modello di classe [basic_filebuf](../standard-library/basic-filebuf-class.md), specializzato per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="fstream"></a><a name="fstream"></a>fstream

Tipo `basic_fstream` specializzato nei parametri del modello **char.**

```cpp
typedef basic_fstream<char, char_traits<char>> fstream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di modello di classe [basic_fstream](../standard-library/basic-fstream-class.md), specializzato per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="ifstream"></a><a name="ifstream"></a>ifstream

Definisce un flusso da usare per leggere i dati di tipo carattere a un byte in sequenza da un file. `ifstream`è un typedef che specializza `basic_ifstream` il modello di classe per **char**.

C'è `wifstream`anche un typedef `basic_ifstream` specializzato nella lettura **wchar_t** caratteri a doppia larghezza. Per altre informazioni, vedere [wifstream](../standard-library/fstream-typedefs.md#wifstream).

```cpp
typedef basic_ifstream<char, char_traits<char>> ifstream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di modello di classe [basic_ifstream](../standard-library/basic-ifstream-class.md), specializzato per gli elementi di tipo char con tratti di carattere predefiniti. Di seguito è riportato un esempio:

```cpp
using namespace std;

ifstream infile("existingtextfile.txt");

if (!infile.bad())
{
    // Dump the contents of the file to cout.
    cout << infile.rdbuf();infile.close();
}
```

## <a name="ofstream"></a><a name="ofstream"></a>ofstream

Tipo `basic_ofstream` specializzato nei parametri del modello **char.**

```cpp
typedef basic_ofstream<char, char_traits<char>> ofstream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di modello di classe [basic_ofstream](../standard-library/basic-ofstream-class.md), specializzato per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="wfstream"></a><a name="wfstream"></a>wfstream (file wfstream)

Tipo `basic_fstream` specializzato in **wchar_t** parametri di modello.

```cpp
typedef basic_fstream<wchar_t, char_traits<wchar_t>> wfstream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_fstream](../standard-library/basic-fstream-class.md), specializzato per gli elementi di tipo **wchar_t** con tratti carattere predefiniti.

## <a name="wifstream"></a><a name="wifstream"></a>wifstream

Tipo `basic_ifstream` specializzato in **wchar_t** parametri di modello.

```cpp
typedef basic_ifstream<wchar_t, char_traits<wchar_t>> wifstream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di modello di classe [basic_ifstream](../standard-library/basic-ifstream-class.md), specializzato per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="wofstream"></a><a name="wofstream"></a>wofstream

Tipo `basic_ofstream` specializzato in **wchar_t** parametri di modello.

```cpp
typedef basic_ofstream<wchar_t, char_traits<wchar_t>> wofstream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di modello di classe [basic_ofstream](../standard-library/basic-ofstream-class.md), specializzato per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="wfilebuf"></a><a name="wfilebuf"></a>wfilebuf

Tipo `basic_filebuf` specializzato in **wchar_t** parametri di modello.

```cpp
typedef basic_filebuf<wchar_t, char_traits<wchar_t>> wfilebuf;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di modello di classe [basic_filebuf](../standard-library/basic-filebuf-class.md), specializzato per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<>fstream](../standard-library/fstream.md)
