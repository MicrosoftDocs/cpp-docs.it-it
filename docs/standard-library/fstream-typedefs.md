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
ms.openlocfilehash: d5a4b0e2d671bb787501767d4321bd3ed61deb88
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62159537"
---
# <a name="ltfstreamgt-typedefs"></a>Typedef &lt;fstream&gt;

||||
|-|-|-|
|[filebuf](#filebuf)|[fstream](#fstream)|[ifstream](#ifstream)|
|[ofstream](#ofstream)|[wfilebuf](#wfilebuf)|[wfstream](#wfstream)|
|[wifstream](#wifstream)|[wofstream](#wofstream)|

## <a name="filebuf"></a>  filebuf

Un tipo `basic_filebuf` specializzato su **char** i parametri del modello.

```cpp
typedef basic_filebuf<char, char_traits<char>> filebuf;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_filebuf](../standard-library/basic-filebuf-class.md)specializzata per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="fstream"></a>  fstream

Un tipo `basic_fstream` specializzato su **char** i parametri del modello.

```cpp
typedef basic_fstream<char, char_traits<char>> fstream;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_fstream](../standard-library/basic-fstream-class.md)specializzata per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="ifstream"></a>  ifstream

Definisce un flusso da usare per leggere i dati di tipo carattere a un byte in sequenza da un file. `ifstream` è un typedef che specializza la classe modello `basic_ifstream` per **char**.

È anche disponibile `wifstream`, un typedef che specializza `basic_ifstream` leggere **wchar_t** caratteri a larghezza doppia. Per altre informazioni, vedere [wifstream](../standard-library/fstream-typedefs.md#wifstream).

```cpp
typedef basic_ifstream<char, char_traits<char>> ifstream;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_ifstream](../standard-library/basic-ifstream-class.md)specializzata per gli elementi di tipo char con tratti di carattere predefiniti. Di seguito è riportato un esempio:

```cpp
using namespace std;

ifstream infile("existingtextfile.txt");

if (!infile.bad())
{
    // Dump the contents of the file to cout.
    cout << infile.rdbuf();infile.close();
}
```

## <a name="ofstream"></a>  ofstream

Un tipo `basic_ofstream` specializzato su **char** i parametri del modello.

```cpp
typedef basic_ofstream<char, char_traits<char>> ofstream;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_ofstream](../standard-library/basic-ofstream-class.md)specializzata per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="wfstream"></a>  wfstream

Un tipo `basic_fstream` specializzato su **wchar_t** i parametri del modello.

```cpp
typedef basic_fstream<wchar_t, char_traits<wchar_t>> wfstream;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_fstream](../standard-library/basic-fstream-class.md)specializzata per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="wifstream"></a>  wifstream

Un tipo `basic_ifstream` specializzato su **wchar_t** i parametri del modello.

```cpp
typedef basic_ifstream<wchar_t, char_traits<wchar_t>> wifstream;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_ifstream](../standard-library/basic-ifstream-class.md)specializzata per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="wofstream"></a>  wofstream

Un tipo `basic_ofstream` specializzato su **wchar_t** i parametri del modello.

```cpp
typedef basic_ofstream<wchar_t, char_traits<wchar_t>> wofstream;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_ofstream](../standard-library/basic-ofstream-class.md)specializzata per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="wfilebuf"></a>  wfilebuf

Un tipo `basic_filebuf` specializzato su **wchar_t** i parametri del modello.

```cpp
typedef basic_filebuf<wchar_t, char_traits<wchar_t>> wfilebuf;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_filebuf](../standard-library/basic-filebuf-class.md)specializzata per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<fstream>](../standard-library/fstream.md)<br/>
