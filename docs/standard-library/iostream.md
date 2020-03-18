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
ms.openlocfilehash: 2906e802072c43a93c59ca40d15e032adeeeef97
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79418916"
---
# <a name="ltiostreamgt"></a>&lt;iostream&gt;

Dichiara gli oggetti che controllano la lettura e la scrittura nei flussi standard. Si tratta spesso dell'unica intestazione necessaria per l'input e l'output di un C++ programma.

## <a name="syntax"></a>Sintassi

```cpp
#include <iostream>
```

> [!NOTE]
> La libreria > \<iostream utilizza le istruzioni `#include <ios>`, `#include <streambuf>`, `#include <istream>`e `#include <ostream>`.

## <a name="remarks"></a>Osservazioni

Gli oggetti rientrano in due gruppi:

- [cin](#cin), [cout](#cout), [cerr](#cerr)e [zoccolo](#clog) sono orientati ai byte, eseguendo trasferimenti convenzionali di byte alla volta.

- [wcin](#wcin), [wcout](#wcout), [wcerr](#wcerr) e [wclog](#wclog) sono orientati ai caratteri "wide", eseguendo la conversione da e verso i caratteri "wide" che il programma modifica internamente.

Quando si eseguono determinate operazioni in un flusso, ad esempio l'input standard, non è possibile eseguire operazioni di un orientamento diverso nello stesso flusso. Pertanto, un programma non può funzionare in modo interscambiabile sia per [cin](#cin) che per [wcin](#wcin), ad esempio.

Tutti gli oggetti dichiarati in questa intestazione condividono una particolare proprietà: è possibile presupporre che siano costruiti prima di qualsiasi oggetto statico definito, in un'unità di conversione che include \<> iostream. Allo stesso modo, si può presupporre che questi oggetti non vengono eliminati definitivamente prima dei distruttori per gli oggetti statici definiti. I flussi di output vengono, tuttavia, scaricati durante la terminazione del programma. Pertanto, è possibile leggere o scrivere nei flussi standard prima dell'avvio del programma e dopo la chiusura del programma.

Questa garanzia non è tuttavia universale. Un costruttore statico potrebbe chiamare una funzione in un'altra unità di conversione. La funzione chiamata non può presumere che gli oggetti dichiarati in questa intestazione siano stati costruiti, dato l'ordine incerto in cui le unità di conversione partecipano alla costruzione statica. Per usare questi oggetti in un contesto di questo tipo, è necessario prima creare un oggetto della classe [ios_base::Init](../standard-library/ios-base-class.md#init).

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

###  <a name="cerr"></a>cerr

L'oggetto `cerr` controlla l'output in un buffer di flusso associato all'oggetto `stderr`, dichiarato in \<cstdio>.

```cpp
extern ostream cerr;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [ostream](../standard-library/ostream-typedefs.md#ostream).

#### <a name="remarks"></a>Osservazioni

L'oggetto controlla eventuali inserimenti senza buffer nell'output di errore standard come un flusso di byte. Una volta costruito l'oggetto, l'espressione `cerr.`[flags](../standard-library/ios-base-class.md#flags) `&` [unitbuf](../standard-library/ios-functions.md#unitbuf) è diverso da zero e `cerr.tie() == &cout`.

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

###  <a name="cin"></a>Cin

Specifica il flusso globale `cin`.

```cpp
extern istream cin;
```

#### <a name="return-value"></a>Valore restituito

Un oggetto [istream](../standard-library/istream-typedefs.md#istream).

#### <a name="remarks"></a>Osservazioni

L'oggetto controlla eventuali estrazioni dall'input standard come un flusso di byte. Al termine della creazione dell'oggetto, la chiamata `cin.`[tie](../standard-library/basic-ios-class.md#tie) restituisce `&`[cout](#cout).

#### <a name="example"></a>Esempio

In questo esempio `cin` imposta il bit di errore sul flusso quando si trova in caratteri non numerici. Il programma cancella il bit di errore e rimuove il carattere non valido dal flusso per continuare.

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

###  <a name="clog"></a>intasare

Specifica il flusso globale `clog`.

```cpp
extern ostream clog;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [ostream](../standard-library/ostream-typedefs.md#ostream).

#### <a name="remarks"></a>Osservazioni

L'oggetto controlla eventuali inserimenti con buffer nell'output di errore standard come un flusso di byte.

#### <a name="example"></a>Esempio

Vedere [cerr](#cerr) per un esempio d'uso di `clog`.

###  <a name="cout"></a>cout

Specifica il flusso globale `cout`.

```cpp
extern ostream cout;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [ostream](../standard-library/ostream-typedefs.md#ostream).

#### <a name="remarks"></a>Osservazioni

L'oggetto controlla eventuali inserimenti nell'output standard come un flusso di byte.

#### <a name="example"></a>Esempio

Vedere [cerr](#cerr) per un esempio d'uso di `cout`.

### <a name="wcerr"></a>wcerr

Specifica il flusso globale `wcerr`.

```cpp
extern wostream wcerr;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [wostream](../standard-library/ostream-typedefs.md#wostream).

#### <a name="remarks"></a>Osservazioni

L'oggetto controlla gli inserimenti senza buffer nell'output di errore standard come un flusso wide. Una volta costruito l'oggetto, l'espressione `wcerr.`[flags](../standard-library/ios-base-class.md#flags) `&` [unitbuf](../standard-library/ios-functions.md#unitbuf) è diverso da zero.

#### <a name="example"></a>Esempio

Vedere [cerr](#cerr) per un esempio d'uso di `wcerr`.

### <a name="wcin"></a>wcin

Specifica il flusso globale `wcin`.

```cpp
extern wistream wcin;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [wistream](../standard-library/istream-typedefs.md#wistream).

#### <a name="remarks"></a>Osservazioni

L'oggetto controlla eventuali estrazioni dall'input standard come un flusso wide. Al termine della creazione dell'oggetto, la chiamata `wcin.`[tie](../standard-library/basic-ios-class.md#tie) restituisce `&`[wcout](#wcout).

#### <a name="example"></a>Esempio

Vedere [cerr](#cerr) per un esempio d'uso di `wcin`.

### <a name="wclog"></a>wclog

Specifica il flusso globale `wclog`.

```cpp
extern wostream wclog;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [wostream](../standard-library/ostream-typedefs.md#wostream).

#### <a name="remarks"></a>Osservazioni

L'oggetto controlla eventuali inserimenti con buffer nell'output di errore standard come un flusso wide.

#### <a name="example"></a>Esempio

Vedere [cerr](#cerr) per un esempio d'uso di `wclog`.

### <a name="wcout"></a>wcout

Specifica il flusso globale `wcout`.

```cpp
extern wostream wcout;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [wostream](../standard-library/ostream-typedefs.md#wostream).

#### <a name="remarks"></a>Osservazioni

L'oggetto controlla gli inserimenti nell'output standard come flusso wide.

#### <a name="example"></a>Esempio

Vedere [cerr](#cerr) per un esempio d'uso di `wcout`.

Il cast delle istanze `CString` in un'istruzione `wcout` deve essere eseguite in `const wchar_t*`, come mostrato nel seguente esempio.

```cpp
CString cs("meow");

wcout <<(const wchar_t*) cs <<endl;
```

Per altre informazioni, vedere [Operazioni CString di base](../atl-mfc-shared/basic-cstring-operations.md).

## <a name="see-also"></a>Vedere anche

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\ (Riferimento file di intestazione)
[Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[iostreams Conventions](../standard-library/iostreams-conventions.md) (Convenzioni di iostream)
