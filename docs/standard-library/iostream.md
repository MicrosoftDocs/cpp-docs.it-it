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
ms.openlocfilehash: 03afb777dc3926284cf0dc625e94a716ecdf5413
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375351"
---
# <a name="ltiostreamgt"></a>&lt;iostream&gt;

Dichiara gli oggetti che controllano la lettura e la scrittura nei flussi standard. Questo include spesso è l'unica intestazione che è necessario eseguire l'input e l'output da un programma di C .

## <a name="syntax"></a>Sintassi

```cpp
#include <iostream>
```

> [!NOTE]
> La \<libreria> iostream `#include <streambuf>` `#include <istream>`utilizza `#include <ostream>` le `#include <ios>`istruzioni , , e .

## <a name="remarks"></a>Osservazioni

Gli oggetti rientrano in due gruppi:

- [cin](#cin), [cout](#cout), [cerr](#cerr)e [clog](#clog) sono orientati ai byte, effettuando trasferimenti tradizionali byte alla volta.

- [wcin](#wcin), [wcout](#wcout), [wcerr](#wcerr) e [wclog](#wclog) sono orientati ai caratteri "wide", eseguendo la conversione da e verso i caratteri "wide" che il programma modifica internamente.

Dopo aver eseguito determinate operazioni su un flusso, ad esempio l'input standard, non è possibile eseguire operazioni con un orientamento diverso sullo stesso flusso. Pertanto, un programma non può funzionare in modo intercambiabile sia su [cin](#cin) che su [wcin](#wcin), ad esempio.

Tutti gli oggetti dichiarati in questa intestazione condividono una proprietà particolare, ovvero è possibile \<presupporre che vengano costruiti prima di qualsiasi oggetto statico definito, in un'unità di conversione che include iostream>. Allo stesso modo, è possibile presupporre che questi oggetti non vengano eliminati prima dei distruttori per tali oggetti statici definiti. I flussi di output vengono tuttavia scaricati durante la chiusura del programma. Pertanto, è possibile leggere o scrivere in modo sicuro nei flussi standard prima dell'avvio del programma e dopo la chiusura del programma.

Questa garanzia non è universale, tuttavia. Un costruttore statico potrebbe chiamare una funzione in un'altra unità di conversione. La funzione chiamata non può presupporre che gli oggetti dichiarati in questa intestazione siano stati costruiti, dato l'ordine incerto in cui le unità di conversione partecipano alla costruzione statica. Per usare questi oggetti in un contesto di questo tipo, è necessario prima creare un oggetto della classe [ios_base::Init](../standard-library/ios-base-class.md#init).

### <a name="global-stream-objects"></a>Oggetti dei flussi globali

|||
|-|-|
|[cerr](#cerr)|Specifica il flusso globale `cerr`.|
|[Cin](#cin)|Specifica il flusso globale `cin`.|
|[Intasare](#clog)|Specifica il flusso globale `clog`.|
|[cout](#cout)|Specifica il flusso globale `cout`.|
|[wcerr](#wcerr)|Specifica il flusso globale `wcerr`.|
|[wcin (in conto in programma](#wcin)|Specifica il flusso globale `wcin`.|
|[wclog](#wclog)|Specifica il flusso globale `wclog`.|
|[wcout](#wcout)|Specifica il flusso globale `wcout`.|

### <a name="cerr"></a><a name="cerr"></a>cerr

L'oggetto `cerr` controlla l'output in un buffer di flusso associato all'oggetto `stderr`, dichiarato in \<cstdio>.

```cpp
extern ostream cerr;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [ostream](../standard-library/ostream-typedefs.md#ostream).

#### <a name="remarks"></a>Osservazioni

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

### <a name="cin"></a><a name="cin"></a>Cin

Specifica il flusso globale `cin`.

```cpp
extern istream cin;
```

#### <a name="return-value"></a>Valore restituito

Un oggetto [istream](../standard-library/istream-typedefs.md#istream).

#### <a name="remarks"></a>Osservazioni

L'oggetto controlla eventuali estrazioni dall'input standard come un flusso di byte. Al termine della creazione dell'oggetto, la chiamata `cin.`[tie](../standard-library/basic-ios-class.md#tie) restituisce `&`[cout](#cout).

#### <a name="example"></a>Esempio

In questo `cin` esempio, imposta il bit di errore nel flusso quando si imbatte in caratteri non numerici. Il programma cancella il bit di errore e rimuove il carattere non valido dal flusso per continuare.

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

### <a name="clog"></a><a name="clog"></a>Intasare

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

### <a name="cout"></a><a name="cout"></a>Cout

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

### <a name="wcerr"></a><a name="wcerr"></a>wcerr

Specifica il flusso globale `wcerr`.

```cpp
extern wostream wcerr;
```

#### <a name="return-value"></a>Valore restituito

Oggetto [wostream](../standard-library/ostream-typedefs.md#wostream).

#### <a name="remarks"></a>Osservazioni

L'oggetto controlla gli inserimenti senza buffer nell'output di errore standard come un flusso wide. Al termine della creazione dell'oggetto, l'espressione `wcerr.`[flags](../standard-library/ios-base-class.md#flags) `&` [unitbuf](../standard-library/ios-functions.md#unitbuf) è diversa da zero.

#### <a name="example"></a>Esempio

Vedere [cerr](#cerr) per un esempio d'uso di `wcerr`.

### <a name="wcin"></a><a name="wcin"></a>wcin (in conto in programma

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

### <a name="wclog"></a><a name="wclog"></a>wclog

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

### <a name="wcout"></a><a name="wcout"></a>wcout

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

[Riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
