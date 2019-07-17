---
title: '&lt;iostream&gt;'
ms.date: 09/20/2017
f1_keywords:
- <iostream>
- iostream/std::cerr
- iostream/std::cin
- iostream/std::clog
- iostream/std::cout
- iostream/std::wcerr
- iostream/std::wcin
- iostream/std::wclog
- iostream/std::wcout
helpviewer_keywords:
- iostream header
ms.assetid: de5d39e1-7e77-4b55-bcd1-7c77b41515c8
ms.openlocfilehash: fa90a861194275d8c82a407e2ca8db6e757aab35
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68245232"
---
# <a name="ltiostreamgt"></a>&lt;iostream&gt;

Dichiara gli oggetti che controllano la lettura e la scrittura nei flussi standard. Questo include è spesso dell'unica intestazione che è necessario per input e output da un C++ programma.

## <a name="syntax"></a>Sintassi

```cpp
#include <iostream>
```

> [!NOTE]
> Il \<iostream > libreria Usa la `#include <ios>`, `#include <streambuf>`, `#include <istream>`, e `#include <ostream>` istruzioni.

## <a name="remarks"></a>Note

Gli oggetti rientrano in due gruppi:

- [CIN](#cin), [cout](#cout), [cerr](#cerr), e [clog](#clog) sono orientati ai byte, in questo trasferimenti convenzionali un byte alla volta.

- [wcin](#wcin), [wcout](#wcout), [wcerr](#wcerr) e [wclog](#wclog) sono orientati ai caratteri "wide", eseguendo la conversione da e verso i caratteri "wide" che il programma modifica internamente.

Al termine dell'operazione determinate operazioni in un flusso, ad esempio l'input standard, è possibile eseguire operazioni di un orientamento diverso nello stesso flusso. Pertanto, un programma non può funzionare in modo intercambiabile con entrambe [cin](#cin) e [wcin](#wcin), ad esempio.

Tutti gli oggetti dichiarati in questa intestazione condividono una particolare proprietà, si può presupporre che sono stati creati prima di qualsiasi definito, in un'unità di conversione che include \<iostream >. Allo stesso modo, si può presupporre che questi oggetti non vengono eliminati definitivamente prima dei distruttori degli oggetti statici che si definisce. I flussi di output vengono, tuttavia, scaricati durante la chiusura del programma. Di conseguenza, è possibile leggere o scrivere nei flussi standard prima dell'avvio del programma e dopo la chiusura dello stesso.

Questa garanzia non è universale, tuttavia. Un costruttore statico potrebbe chiamare una funzione in un'altra unità di conversione. La funzione chiamata non è possibile presupporre che gli oggetti dichiarati in questa intestazione siano stati costruiti, dato l'ordine incerto in quale traduzione unità fanno parte di costruzione statica. Per usare questi oggetti in un contesto di questo tipo, è necessario prima creare un oggetto della classe [ios_base::Init](../standard-library/ios-base-class.md#init).

### <a name="global-stream-objects"></a>Oggetti dei flussi globali

|||
|-|-|
|[cerr](#cerr)|Specifica il flusso globale `cerr`.|
|[cin](#cin)|Specifica il flusso globale `cin`.|
|[clog](#clog)|Specifica il flusso globale `clog`.|
|[cout](#cout)|Specifica il flusso globale `cout`.|
|[wcerr](#wcerr)|Specifica il flusso globale `wcerr`.|
|[wcin](#wcin)|Specifica il flusso globale `wcin`.|
|[wclog](#wclog)|Specifica il flusso globale `wclog`.|
|[wcout](#wcout)|Specifica il flusso globale `wcout`.|

###  <a name="cerr"></a> cerr

L'oggetto `cerr` controlla l'output in un buffer di flusso associato all'oggetto `stderr`, dichiarato in \<cstdio>.

```cpp
extern ostream cerr;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [ostream](../standard-library/ostream-typedefs.md#ostream).

#### <a name="remarks"></a>Note

L'oggetto controlla eventuali inserimenti senza buffer nell'output di errore standard come un flusso di byte. Al termine della creazione dell'oggetto, l'espressione `cerr.`[flags](../standard-library/ios-base-class.md#flags) `&` [unitbuf](../standard-library/ios-functions.md#unitbuf) è diversa da zero e `cerr.tie() == &cout`.

#### <a name="example"></a>Esempio

```cpp
// iostream_cerr.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

using namespace std;

void TestWide( )
{
   int i = 0;
   wcout << L"Enter a number: ";
   wcin >> i;
   wcerr << L"test for wcerr" << endl;
   wclog << L"test for wclog" << endl;
}

int main( )
{
   int i = 0;
   cout << "Enter a number: ";
   cin >> i;
   cerr << "test for cerr" << endl;
   clog << "test for clog" << endl;
   TestWide( );
}
```

###  <a name="cin"></a> CIN

Specifica il flusso globale `cin`.

```cpp
extern istream cin;
```

#### <a name="return-value"></a>Valore restituito

Un oggetto [istream](../standard-library/istream-typedefs.md#istream).

#### <a name="remarks"></a>Note

L'oggetto controlla eventuali estrazioni dall'input standard come un flusso di byte. Al termine della creazione dell'oggetto, la chiamata `cin.`[tie](../standard-library/basic-ios-class.md#tie) restituisce `&`[cout](#cout).

#### <a name="example"></a>Esempio

In questo esempio `cin` imposta il fail bit sul flusso quando arriva in caratteri non numerici. Il programma Cancella il fail bit e rimuove il carattere non valido dal flusso per continuare.

```cpp
// iostream_cin.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main()
{
   int x;
   cout << "enter choice:";
   cin >> x;
   while (x < 1 || x > 4)
   {
      cout << "Invalid choice, try again:";
      cin >> x;
      // not a numeric character, probably
      // clear the failure and pull off the non-numeric character
      if (cin.fail())
      {
         cin.clear();
         char c;
         cin >> c;
      }
   }
}
```

```Output
2
```

###  <a name="clog"></a> CLOG

Specifica il flusso globale `clog`.

```cpp
extern ostream clog;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [ostream](../standard-library/ostream-typedefs.md#ostream).

#### <a name="remarks"></a>Note

L'oggetto controlla eventuali inserimenti con buffer nell'output di errore standard come un flusso di byte.

#### <a name="example"></a>Esempio

Vedere [cerr](#cerr) per un esempio d'uso di `clog`.

###  <a name="cout"></a> cout

Specifica il flusso globale `cout`.

```cpp
extern ostream cout;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [ostream](../standard-library/ostream-typedefs.md#ostream).

#### <a name="remarks"></a>Note

L'oggetto controlla eventuali inserimenti nell'output standard come un flusso di byte.

#### <a name="example"></a>Esempio

Vedere [cerr](#cerr) per un esempio d'uso di `cout`.

### <a name="wcerr"></a> wcerr

Specifica il flusso globale `wcerr`.

```cpp
extern wostream wcerr;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [wostream](../standard-library/ostream-typedefs.md#wostream).

#### <a name="remarks"></a>Note

L'oggetto controlla gli inserimenti senza buffer nell'output di errore standard come un flusso wide. Al termine della creazione dell'oggetto, l'espressione `wcerr.`[flags](../standard-library/ios-base-class.md#flags) `&` [unitbuf](../standard-library/ios-functions.md#unitbuf) è diversa da zero.

#### <a name="example"></a>Esempio

Vedere [cerr](#cerr) per un esempio d'uso di `wcerr`.

### <a name="wcin"></a> wcin

Specifica il flusso globale `wcin`.

```cpp
extern wistream wcin;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [wistream](../standard-library/istream-typedefs.md#wistream).

#### <a name="remarks"></a>Note

L'oggetto controlla eventuali estrazioni dall'input standard come un flusso wide. Al termine della creazione dell'oggetto, la chiamata `wcin.`[tie](../standard-library/basic-ios-class.md#tie) restituisce `&`[wcout](#wcout).

#### <a name="example"></a>Esempio

Vedere [cerr](#cerr) per un esempio d'uso di `wcin`.

### <a name="wclog"></a> wclog

Specifica il flusso globale `wclog`.

```cpp
extern wostream wclog;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [wostream](../standard-library/ostream-typedefs.md#wostream).

#### <a name="remarks"></a>Note

L'oggetto controlla eventuali inserimenti con buffer nell'output di errore standard come un flusso wide.

#### <a name="example"></a>Esempio

Vedere [cerr](#cerr) per un esempio d'uso di `wclog`.

### <a name="wcout"></a> wcout

Specifica il flusso globale `wcout`.

```cpp
extern wostream wcout;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [wostream](../standard-library/ostream-typedefs.md#wostream).

#### <a name="remarks"></a>Note

L'oggetto controlla gli inserimenti nell'output standard come flusso wide.

#### <a name="example"></a>Esempio

Vedere [cerr](#cerr) per un esempio d'uso di `wcout`.

Il cast delle istanze `CString` in un'istruzione `wcout` deve essere eseguite in `const wchar_t*`, come mostrato nel seguente esempio.

```
CString cs("meow");

wcout <<(const wchar_t*) cs <<endl;
```

Per altre informazioni, vedere [Operazioni CString di base](../atl-mfc-shared/basic-cstring-operations.md).

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
