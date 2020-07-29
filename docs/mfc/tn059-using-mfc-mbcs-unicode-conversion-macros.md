---
title: 'TN059: utilizzo di MFC MBCS-macro di conversione Unicode'
ms.date: 11/04/2016
helpviewer_keywords:
- MFCANS32.DLL
- Unicode [MFC], conversion macros
- Unicode [MFC], OLE interfaces
- conversion macros [MFC]
- converting Unicode
- MBCS [MFC], conversion macros
- macros [MFC], MBCS conversion macros
- TN059
ms.assetid: a2aab748-94d0-4e2f-8447-3bd07112a705
ms.openlocfilehash: d689e87b8f2804fe99804c6ca37a48bac01df263
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87182733"
---
# <a name="tn059-using-mfc-mbcsunicode-conversion-macros"></a>TN059: utilizzo di macro di conversione MFC MBCS/Unicode

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota descrive come usare le macro per la conversione MBCS/Unicode, definite in AFXPRIV. H. Queste macro sono particolarmente utili se l'applicazione gestisce direttamente l'API OLE o per qualche motivo, spesso è necessario eseguire la conversione tra Unicode e MBCS.

## <a name="overview"></a>Panoramica

In MFC 3. x è stata utilizzata una DLL speciale (MFCANS32.DLL) per eseguire automaticamente la conversione tra Unicode e MBCS quando sono state chiamate le interfacce OLE. Questa DLL era un livello quasi trasparente che consentiva la scrittura di applicazioni OLE come se le API e le interfacce OLE fossero MBCS, anche se sono sempre Unicode (eccetto Macintosh). Sebbene questo livello fosse pratico e le applicazioni consentite possano essere trasferite rapidamente da Win16 a Win32 (MFC, Microsoft Word, Microsoft Excel e VBA, sono solo alcune delle applicazioni Microsoft che usano questa tecnologia), ha avuto un notevole calo delle prestazioni. Per questo motivo, MFC 4. x non usa questa DLL e comunica invece direttamente con le interfacce OLE Unicode. Per eseguire questa operazione, è necessario che MFC converta in formato Unicode in MBCS quando si effettua una chiamata a un'interfaccia OLE e spesso deve eseguire la conversione in formato MBCS da Unicode durante l'implementazione di un'interfaccia OLE. Per gestire questa operazione in modo efficiente e semplice, sono state create alcune macro per semplificare la conversione.

Uno degli ostacoli principali della creazione di tale set di macro è l'allocazione di memoria. Poiché non è possibile convertire le stringhe sul posto, è necessario allocare la nuova memoria per contenere i risultati convertiti. Questa operazione potrebbe essere stata eseguita con codice simile al seguente:

```
// we want to convert an MBCS string in lpszA
int nLen = MultiByteToWideChar(CP_ACP,
    0,
    lpszA, -1,
    NULL,
    NULL);

LPWSTR lpszW = new WCHAR[nLen];
MultiByteToWideChar(CP_ACP,
    0,
    lpszA, -1,
    lpszW,
    nLen);

// use it to call OLE here
pI->SomeFunctionThatNeedsUnicode(lpszW);

// free the string
delete[] lpszW;
```

Questo approccio è costituito da una serie di problemi. Il problema principale è che è molto codice scrivere, testare ed eseguire il debug. Una semplice chiamata di funzione, ora è molto più complessa. Inoltre, si verifica un sovraccarico significativo in fase di esecuzione. La memoria deve essere allocata nell'heap e liberata ogni volta che viene eseguita una conversione. Infine, è necessario aggiungere il codice precedente per le `#ifdefs` compilazioni Unicode e Macintosh, che non richiedono la conversione.

La soluzione con cui è stato creato è creare alcune macro che 1) mascherano la differenza tra le varie piattaforme e 2) usare uno schema di allocazione della memoria efficiente e 3) sono semplici da inserire nel codice sorgente esistente. Di seguito è riportato un esempio di una delle definizioni:

```
#define A2W(lpa) (\
((LPCSTR)lpa == NULL) NULL : (\
    _convert = (strnlen(lpa)+1),\
    AfxA2WHelper((LPWSTR) alloca(_convert*2),
    lpa,
    _convert)\)\)
```

L'uso di questa macro anziché del codice precedente e di elementi è molto più semplice:

```
// use it to call OLE here
USES_CONVERSION;
pI->SomeFunctionThatNeedsUnicode(T2OLE(lpszA));
```

Sono presenti chiamate aggiuntive in cui la conversione è necessaria, ma l'uso delle macro è semplice ed efficace.

L'implementazione di ogni macro utilizza la funzione _alloca () per allocare memoria dallo stack anziché dall'heap. L'allocazione della memoria dallo stack è molto più veloce rispetto all'allocazione della memoria nell'heap e la memoria viene liberata automaticamente quando la funzione viene chiusa. Inoltre, le macro evitano di chiamare `MultiByteToWideChar` (o `WideCharToMultiByte` ) più di una volta. Questa operazione viene eseguita allocando una quantità di memoria minore di quella necessaria. Si sa che un'MBC convertirà al massimo un **WCHAR** e che per ogni **WCHAR** sarà presente un massimo di due byte MBC. Allocando un po' più del necessario, ma sempre sufficiente per gestire la conversione, viene evitata la seconda chiamata della seconda chiamata alla funzione di conversione. La chiamata alla funzione helper `AfxA2Whelper` riduce il numero di push di argomento che devono essere eseguiti per eseguire la conversione (questo comporta un codice più piccolo, che se chiamato `MultiByteToWideChar` direttamente).

Per fare in modo che le macro dispongano di spazio per archiviare la lunghezza temporanea, è necessario dichiarare una variabile locale denominata _convert che esegue questa operazione in ogni funzione che usa le macro di conversione. Questa operazione viene eseguita richiamando la macro USES_CONVERSION come illustrato sopra nell'esempio.

Sono disponibili sia macro di conversione generiche che macro specifiche di OLE. Questi due set di macro diversi sono descritti di seguito. Tutte le macro si trovano in AFXPRIV. H.

## <a name="generic-conversion-macros"></a>Macro di conversione generica

Le macro di conversione generiche formano il meccanismo sottostante. L'esempio di macro e l'implementazione illustrata nella sezione precedente, A2W, è una macro "generica". Non è correlato a OLE in modo specifico. Il set di macro generiche è elencato di seguito:

```
A2CW      (LPCSTR) -> (LPCWSTR)
A2W      (LPCSTR) -> (LPWSTR)
W2CA      (LPCWSTR) -> (LPCSTR)
W2A      (LPCWSTR) -> (LPSTR)
```

Oltre a eseguire conversioni di testo, sono disponibili anche macro e funzioni di supporto per la conversione di `TEXTMETRIC` `DEVMODE` `BSTR` stringhe allocate,, e OLE. Queste macro esulano dall'ambito di questa discussione: fare riferimento a AFXPRIV. H per ulteriori informazioni su queste macro.

## <a name="ole-conversion-macros"></a>Macro di conversione OLE

Le macro di conversione OLE sono progettate in modo specifico per la gestione di funzioni che prevedono caratteri **OLESTR** . Se si esaminano le intestazioni OLE, si vedranno molti riferimenti a **LPCOLESTR** e **OLECHAR**. Questi tipi vengono utilizzati per fare riferimento al tipo di caratteri utilizzati nelle interfacce OLE in modo non specifico per la piattaforma. **OLECHAR** esegue il mapping a **`char`** in piattaforme Win16 e Macintosh e a **WCHAR** in Win32.

Per limitare al minimo il numero di direttive **#ifdef** nel codice MFC, è presente una macro simile per ogni conversione che include le stringhe OLE. Di seguito sono riportate le macro utilizzate più di frequente:

```
T2COLE   (LPCTSTR) -> (LPCOLESTR)
T2OLE   (LPCTSTR) -> (LPOLESTR)
OLE2CT   (LPCOLESTR) -> (LPCTSTR)
OLE2T   (LPCOLESTR) -> (LPCSTR)
```

Anche in questo caso, esistono macro simili per eseguire le stringhe allocate TEXTMETRIC, DEVMODE, BSTR e OLE. Vedere AFXPRIV. H per ulteriori informazioni.

## <a name="other-considerations"></a>Altre considerazioni

Non usare le macro in un ciclo stretto. Ad esempio, non si desidera scrivere il seguente tipo di codice:

```cpp
void BadIterateCode(LPCTSTR lpsz)
{
    USES_CONVERSION;
    for (int ii = 0; ii <10000; ii++)
    pI->SomeMethod(ii, T2COLE(lpsz));

}
```

Il codice precedente potrebbe causare l'allocazione di megabyte di memoria nello stack a seconda del contenuto della stringa `lpsz` . È necessario anche tempo per convertire la stringa per ogni iterazione del ciclo. Spostare invece le conversioni costanti al di fuori del ciclo:

```cpp
void MuchBetterIterateCode(LPCTSTR lpsz)
{
    USES_CONVERSION;
    LPCOLESTR lpszT = T2COLE(lpsz);

    for (int ii = 0; ii <10000; ii++)
    pI->SomeMethod(ii, lpszT);

}
```

Se la stringa non è costante, incapsulare la chiamata al metodo in una funzione. Questo consentirà di liberare ogni volta il buffer di conversione. Ad esempio:

```cpp
void CallSomeMethod(int ii, LPCTSTR lpsz)
{
    USES_CONVERSION;
    pI->SomeMethod(ii, T2COLE(lpsz));

}

void MuchBetterIterateCode2(LPCTSTR* lpszArray)
{
    for (int ii = 0; ii <10000; ii++)
    CallSomeMethod(ii, lpszArray[ii]);

}
```

Non restituire mai il risultato di una delle macro, a meno che il valore restituito non implichi la creazione di una copia dei dati prima della restituzione. Questo codice, ad esempio, non è valido:

```
LPTSTR BadConvert(ISomeInterface* pI)
{
    USES_CONVERSION;
    LPOLESTR lpsz = NULL;
    pI->GetFileName(&lpsz);

LPTSTR lpszT = OLE2T(lpsz);

    CoMemFree(lpsz);

return lpszT; // bad! returning alloca memory
}
```

Il codice precedente può essere corretto modificando il valore restituito in un elemento che copia il valore:

```
CString BetterConvert(ISomeInterface* pI)
{
    USES_CONVERSION;
    LPOLESTR lpsz = NULL;
    pI->GetFileName(&lpsz);

LPTSTR lpszT = OLE2T(lpsz);

    CoMemFree(lpsz);

return lpszT; // CString makes copy
}
```

Le macro sono facili da usare e facili da inserire nel codice, ma come è possibile capire dagli avvertimenti precedenti, è necessario prestare attenzione durante l'uso.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
