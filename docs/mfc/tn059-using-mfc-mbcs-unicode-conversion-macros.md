---
title: 'TN059: Utilizzo di macro di conversione MBCS-Unicode MFC'
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
ms.openlocfilehash: 0d63a87d0fddde30dd5cbb18207297a345d74b9c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366586"
---
# <a name="tn059-using-mfc-mbcsunicode-conversion-macros"></a>TN059: utilizzo di macro di conversione MFC MBCS/Unicode

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota viene descritto come utilizzare le macro per la conversione MBCS/Unicode, definite in AFXPRIV. H. Queste macro sono particolarmente utili se l'applicazione si occupa direttamente con l'API OLE o per qualche motivo, spesso è necessario convertire tra Unicode e MBCS.

## <a name="overview"></a>Panoramica

In MFC 3.x è stata utilizzata una DLL speciale (MFCANS32. DLL) per eseguire automaticamente la conversione tra Unicode e MBCS quando sono state chiamate le interfacce OLE. Questa DLL era un livello quasi trasparente che consentiva alle applicazioni OLE di essere scritte come se le API e le interfacce OLE fossero MBCS, anche se sono sempre Unicode (tranne che in Macintosh). Mentre questo livello era conveniente e ha permesso alle applicazioni di essere rapidamente portato da Win16 a Win32 (MFC, Microsoft Word, Microsoft Excel e VBA, sono solo alcune delle applicazioni Microsoft che hanno utilizzato questa tecnologia), ha avuto un impatto a volte significativo sulle prestazioni. Per questo motivo, MFC 4.x non utilizza questa DLL e invece parla direttamente alle interfacce OLE Unicode. A tale scopo, MFC deve convertire in Unicode in MBCS quando si effettua una chiamata a un'interfaccia OLE e spesso deve convertire in MBCS da Unicode quando si implementa un'interfaccia OLE. Al fine di gestire questo in modo efficiente e facile, un certo numero di macro sono state create per rendere questa conversione più facile.

Uno dei più grandi ostacoli della creazione di un tale insieme di macro è l'allocazione di memoria. Poiché le stringhe non possono essere convertite sul posto, è necessario allocare nuova memoria per contenere i risultati convertiti. Questo avrebbe potuto essere fatto con codice simile al seguente:

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

Questo approccio come una serie di problemi. Il problema principale è che è un sacco di codice per scrivere, testare e debug. Qualcosa che era una semplice chiamata di funzione, è ora molto più complesso. Inoltre, vi è un sovraccarico di runtime significativo in questo modo. La memoria deve essere allocata nell'heap e liberata ogni volta che viene eseguita una conversione. Infine, il codice precedente avrebbe `#ifdefs` bisogno di avere appropriato aggiunto per le compilazioni Unicode e Macintosh (che non richiedono questa conversione per avere luogo).

La soluzione che abbiamo ideato è quella di creare alcune macro che 1) mascherare la differenza tra le varie piattaforme, e 2) utilizzare uno schema di allocazione di memoria efficiente, e 3) sono facili da inserire nel codice sorgente esistente. Di seguito è riportato un esempio di una delle definizioni:

```
#define A2W(lpa) (\
((LPCSTR)lpa == NULL) NULL : (\
    _convert = (strnlen(lpa)+1),\
    AfxA2WHelper((LPWSTR) alloca(_convert*2),
    lpa,
    _convert)\)\)
```

Utilizzando questa macro invece del codice sopra e le cose sono molto più semplici:

```
// use it to call OLE here
USES_CONVERSION;
pI->SomeFunctionThatNeedsUnicode(T2OLE(lpszA));
```

Ci sono chiamate extra in cui la conversione è necessaria, ma l'utilizzo delle macro è semplice ed efficace.

L'implementazione di ogni macro utilizza la funzione _alloca() per allocare memoria dallo stack anziché dall'heap. L'allocazione di memoria dallo stack è molto più veloce rispetto all'allocazione di memoria nell'heap e la memoria viene automaticamente liberata quando la funzione viene chiusa. Inoltre, le macro evitano di chiamare `MultiByteToWideChar` (o `WideCharToMultiByte`) più di una volta. Questo viene fatto allocando un po 'più di memoria del necessario. Sappiamo che un MBC convertirà al massimo un **WCHAR** e che per ogni **WCHAR** avremo un massimo di due mbC byte. Allocando un po' più del necessario, ma sempre sufficiente per gestire la conversione viene evitata la seconda chiamata di chiamata alla funzione di conversione. La chiamata alla `AfxA2Whelper` funzione di supporto riduce il numero di push di argomenti che devono essere eseguiti per `MultiByteToWideChar` eseguire la conversione (questo si traduce in codice più piccolo, che se viene chiamato direttamente).

Affinché le macro dispongano di spazio per archiviare la lunghezza temporanea, è necessario dichiarare una variabile locale denominata _convert che esegue questa operazione in ogni funzione che utilizza le macro di conversione. Questa operazione viene eseguita richiamando la macro USES_CONVERSION come illustrato in precedenza nell'esempio.

Sono disponibili sia macro di conversione generiche che macro specifiche OLE. Questi due diversi set di macro sono descritti di seguito. Tutte le macro risiedono in AFXPRIV. H.

## <a name="generic-conversion-macros"></a>Macro di conversione generiche

Le macro di conversione generiche formano il meccanismo sottostante. L'esempio di macro e l'implementazione illustrati nella sezione precedente, A2W, è una di queste macro "generiche". Non è correlato specificamente a OLE. Il set di macro generiche è elencato di seguito:

```
A2CW      (LPCSTR) -> (LPCWSTR)
A2W      (LPCSTR) -> (LPWSTR)
W2CA      (LPCWSTR) -> (LPCSTR)
W2A      (LPCWSTR) -> (LPSTR)
```

Oltre a eseguire conversioni di testo, sono disponibili `TEXTMETRIC`anche `DEVMODE` `BSTR`macro e funzioni di supporto per la conversione di stringhe allocate , , e OLE . Queste macro esulano dall'ambito di questa discussione - fare riferimento a AFXPRIV. H per ulteriori informazioni su tali macro.

## <a name="ole-conversion-macros"></a>Macro di conversione OLE

Le macro di conversione OLE sono progettate specificamente per la gestione di funzioni che prevedono caratteri **OLESTR.** Se si esaminano le intestazioni OLE, verranno visualizzati molti riferimenti a **LPCOLESTR** e **OLECHAR**. Questi tipi vengono utilizzati per fare riferimento al tipo di caratteri utilizzati nelle interfacce OLE in un modo che non è specifico per la piattaforma. **OLECHAR** esegue il mapping a **char** nelle piattaforme Win16 e Macintosh e **WCHAR** in Win32.

Per mantenere al minimo il numero di direttive **#ifdef** nel codice MFC abbiamo una macro simile per ogni conversione che in cui sono coinvolte le stringhe OLE. Le seguenti macro sono le più comunemente utilizzate:

```
T2COLE   (LPCTSTR) -> (LPCOLESTR)
T2OLE   (LPCTSTR) -> (LPOLESTR)
OLE2CT   (LPCOLESTR) -> (LPCTSTR)
OLE2T   (LPCOLESTR) -> (LPCSTR)
```

Anche in questo caso, esistono macro simili per l'esecuzione di stringhe allocate TEXTMETRIC, DEVMODE, BSTR e OLE. Fare riferimento a AFXPRIV. H per ulteriori informazioni.

## <a name="other-considerations"></a>Altre considerazioni

Non utilizzare le macro in un ciclo stretto. Ad esempio, non si desidera scrivere il seguente tipo di codice:

```
void BadIterateCode(LPCTSTR lpsz)
{
    USES_CONVERSION;
    for (int ii = 0; ii <10000; ii++)
    pI->SomeMethod(ii, T2COLE(lpsz));

}
```

Il codice precedente potrebbe comportare l'allocazione di megabyte di memoria `lpsz` nello stack a seconda del contenuto della stringa! Richiede inoltre tempo per convertire la stringa per ogni iterazione del ciclo. Al contrario, spostare tali conversioni costanti fuori dal ciclo:Instead, move such constant conversions out of the loop:

```
void MuchBetterIterateCode(LPCTSTR lpsz)
{
    USES_CONVERSION;
    LPCOLESTR lpszT = T2COLE(lpsz);

    for (int ii = 0; ii <10000; ii++)
    pI->SomeMethod(ii, lpszT);

}
```

Se la stringa non è costante, incapsulare la chiamata al metodo in una funzione. In questo modo il buffer di conversione da liberare ogni volta. Ad esempio:

```
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

Non restituire mai il risultato di una delle macro, a meno che il valore restituito non implichi la creazione di una copia dei dati prima della restituzione. Ad esempio, questo codice non è valido:For example, this code is bad:

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

Il codice precedente potrebbe essere risolto modificando il valore restituito in un elemento che copia il valore:The code above could be fixed by changing the return value to something that copies the value:

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

Le macro sono facili da usare e facili da inserire nel codice, ma come si può dire dalle avvertenze di cui sopra, è necessario fare attenzione quando li si utilizza.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
