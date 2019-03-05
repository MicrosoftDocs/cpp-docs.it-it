---
title: 'TN059: Utilizzo di macro di conversione MFC MBCS-Unicode'
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.mbcs
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
ms.openlocfilehash: 130b459dc87f36325d0f253181a196bea868856f
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57262812"
---
# <a name="tn059-using-mfc-mbcsunicode-conversion-macros"></a>TN059: Utilizzo di macro di conversione Unicode/MBCS MFC

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota viene descritto come utilizzare le macro di conversione MBCS/Unicode, definite in AFXPRIV. H. Queste macro sono molto utili se le trattative vengono gestite dell'applicazione direttamente con l'API OLE o per qualche motivo, spesso è necessario eseguire la conversione tra Unicode e MBCS.

## <a name="overview"></a>Panoramica

In MFC 3.x, una DLL speciale è stato utilizzato (MFCANS32. DLL) per la conversione tra Unicode e MBCS automaticamente quando sono state chiamate interfacce OLE. Questa DLL è stato un livello quasi trasparente consentiti OLE (applicazioni) devono essere scritti come se le interfacce e le API OLE MBCS, anche se sono sempre Unicode (tranne che su Macintosh). Mentre questo livello era comodo e consentito alle applicazioni di eseguire rapidamente il porting da Win16 a Win32 (MFC, Microsoft Word, Microsoft Excel e VBA, sono solo alcune delle applicazioni Microsoft che utilizzato questa tecnologia), che aveva un talvolta significativi delle prestazioni raggiunto. Per questo motivo, MFC 4.x non utilizza questa DLL e invece comunica direttamente con le interfacce OLE Unicode. A tale scopo, MFC deve convertire in formato Unicode in MBCS quando si effettua una chiamata a un'interfaccia OLE e spesso è necessario convertire in MBCS da Unicode quando si implementa un'interfaccia OLE. Per risolvere il problema in modo efficiente e semplice, un numero di macro sono stato creato per semplificare questa conversione.

Uno degli ostacoli più grandi di creazione di un set di questo tipo di macro è allocazione di memoria. Poiché le stringhe non possono essere convertite in posizione, è necessario allocare nuova memoria per contenere i risultati convertiti. Ciò potrebbe essere stata effettuata con codice simile al seguente:

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

Questo approccio come una serie di problemi. Il problema principale è che è una grande quantità di codice da scrivere, testare ed eseguire il debug. Un elemento che viene eseguita una chiamata di funzione semplice, è ora molto più complessa. Inoltre, vi è un runtime significativo overhead in questo modo. Memoria deve essere allocata nell'heap e liberata ogni volta che viene eseguita una conversione. Infine, il codice riportato sopra sarebbe necessario applicare appropriato `#ifdefs` aggiunto per le compilazioni Unicode e Macintosh (che non richiedono la conversione venga eseguita).

La soluzione che ci siamo inventati consiste nel creare alcune macro che 1) maschera la differenza tra le diverse piattaforme e 2) usare uno schema di allocazione efficiente della memoria e 3) sono facile da inserire nel esistente di codice sorgente. Di seguito è riportato un esempio di una delle definizioni:

```
#define A2W(lpa) (\
((LPCSTR)lpa == NULL) NULL : (\
    _convert = (strnlen(lpa)+1),\
    AfxA2WHelper((LPWSTR) alloca(_convert*2),
    lpa,
    _convert)\)\)
```

Usare questa macro anziché il codice sopra riportato e cose sono molto più semplici:

```
// use it to call OLE here
USES_CONVERSION;
pI->SomeFunctionThatNeedsUnicode(T2OLE(lpszA));
```

Sono presenti chiamate aggiuntive in cui è necessaria la conversione, ma usando la macro è semplice ed efficace.

L'implementazione di ogni macro Usa la funzione alloca () per allocare memoria dallo stack anziché l'heap. Allocazione di memoria dallo stack è molto più veloce rispetto a allocazione di memoria nell'heap e la memoria viene liberata automaticamente quando la funzione viene chiusa. Inoltre, le macro di evitare di chiamare `MultiByteToWideChar` (o `WideCharToMultiByte`) più di una volta. Questa operazione viene eseguita assegnando un po' più memoria superiore a quello necessario. Sappiamo che un MBC convertirà in al massimo una sola **WCHAR** e che per ogni **WCHAR** avremo un massimo di due byte MBC. Allocando un po' più del necessario, ma sempre sufficiente per gestire la conversione la seconda chiamata in secondo luogo viene evitato chiamata alla funzione di conversione. La chiamata alla funzione helper `AfxA2Whelper` riduce il numero di push di argomento che deve essere eseguita per eseguire la conversione (ciò comporta in dimensioni del codice, rispetto a se chiamato `MultiByteToWideChar` direttamente).

Affinché per le macro per disporre di spazio per archiviare la lunghezza temporanea, è necessario dichiarare una variabile locale denominata Converti che esegue questa operazione in ogni funzione che usa le macro di conversione. Questa operazione viene eseguita richiamando la macro USES_CONVERSION come illustrato nell'esempio precedente.

Sono disponibili le macro di conversione generico e macro specifiche OLE. Questi due set diversi macro sono descritte di seguito. Tutte le macro risiedono in AFXPRIV. H.

## <a name="generic-conversion-macros"></a>Macro di conversione generico

Le macro di conversione generico costituiscono il meccanismo sottostante. Nell'esempio di macro e l'implementazione illustrata nella sezione precedente, A2W, è una tale macro "generica". Non è correlato a OLE in modo specifico. Il set delle macro generiche è elencato di seguito:

```
A2CW      (LPCSTR) -> (LPCWSTR)
A2W      (LPCSTR) -> (LPWSTR)
W2CA      (LPCWSTR) -> (LPCSTR)
W2A      (LPCWSTR) -> (LPSTR)
```

Oltre a eseguire la conversione del testo, esistono anche le macro e funzioni di supporto per la conversione `TEXTMETRIC`, `DEVMODE`, `BSTR`e OLE allocate le stringhe. Queste macro sono esula dall'ambito di questa discussione, fare riferimento a AFXPRIV. H per altre informazioni su queste macro.

## <a name="ole-conversion-macros"></a>Macro di conversione OLE

Le macro di conversione OLE sono progettate in modo specifico per la gestione delle funzioni che prevedono **OLESTR** caratteri. Se si esaminano le intestazioni OLE, si noterà molti riferimenti ai **LPCOLESTR** e **OLECHAR**. Questi tipi vengono utilizzati per fare riferimento al tipo di caratteri utilizzati nelle interfacce OLE in modo che non è specifico per la piattaforma. **OLECHAR** esegue il mapping a **char** nelle piattaforme Win16 e Macintosh e **WCHAR** in Win32.

Per evitare che il numero di **#ifdef** direttive in MFC di codice minima è disponibile una macro simile per ogni conversione che in cui sono coinvolte stringhe OLE. Le macro seguenti vengono usate più comunemente:

```
T2COLE   (LPCTSTR) -> (LPCOLESTR)
T2OLE   (LPCTSTR) -> (LPOLESTR)
OLE2CT   (LPCOLESTR) -> (LPCTSTR)
OLE2T   (LPCOLESTR) -> (LPCSTR)
```

Esistono anche in questo caso, le macro simile per l'esecuzione TEXTMETRIC, DEVMODE, BSTR e OLE allocate le stringhe. Fare riferimento a AFXPRIV. H per altre informazioni.

## <a name="other-considerations"></a>Altre considerazioni

Non usare le macro in un ciclo ridotto. Ad esempio, non si desidera scrivere il tipo di codice seguente:

```
void BadIterateCode(LPCTSTR lpsz)
{
    USES_CONVERSION;
    for (int ii = 0; ii <10000; ii++)
    pI->SomeMethod(ii, T2COLE(lpsz));

}
```

Il codice riportato sopra può comportare l'allocazione di megabyte di memoria nello stack a seconda che il contenuto della stringa `lpsz` è! Può anche tempo per convertire la stringa per ogni iterazione del ciclo. Al contrario, spostare tali conversioni costanti all'esterno del ciclo:

```
void MuchBetterIterateCode(LPCTSTR lpsz)
{
    USES_CONVERSION;
    LPCOLESTR lpszT = T2COLE(lpsz);

    for (int ii = 0; ii <10000; ii++)
    pI->SomeMethod(ii, lpszT);

}
```

Se la stringa non è costante, quindi incapsulare la chiamata al metodo in una funzione. In questo modo il buffer di conversione da liberare ogni volta. Ad esempio:

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

Mai restituire il risultato di una delle macro, a meno che il valore restituito implica la copia dei dati prima della restituzione. Ad esempio, questo codice non è valido:

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

Il codice riportato sopra può essere corretto modificando il valore restituito a un elemento che consente di copiare il valore:

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

Le macro sono facili da usare e facili da inserire nel codice, ma come può vedere dalle avvertenze precedente, è necessario prestare attenzione quando vengono utilizzati.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
