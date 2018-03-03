---
title: 'TN059: Utilizzo di macro di conversione MFC MBCS-Unicode | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.mbcs
dev_langs:
- C++
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 45df45fe3d06e71b33c20ecd88d3f958a5673df1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn059-using-mfc-mbcsunicode-conversion-macros"></a>TN059: utilizzo di macro di conversione MFC MBCS/Unicode
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene descritto come utilizzare le macro di conversione MBCS/Unicode, che sono definiti in AFXPRIV. H. Queste macro sono utili se riguarda l'applicazione direttamente con l'API OLE o per qualche motivo, spesso è necessario eseguire la conversione tra Unicode e MBCS.  
  
## <a name="overview"></a>Panoramica  
 In MFC 3. x, stato di una DLL speciale utilizzato (MFCANS32. DLL) per convertire tra Unicode e MBCS automaticamente quando sono state chiamate interfacce OLE. Questa DLL è un livello quasi trasparente consentiti applicazioni OLE da scrivere come se le interfacce e le API OLE MBCS, anche se sono sempre Unicode (tranne che in Macintosh). Durante questo livello pratico e alle applicazioni di eseguire rapidamente il porting da Win16 a Win32 (MFC, Microsoft Word, Microsoft Excel e VBA, sono solo alcune delle applicazioni Microsoft che questa tecnologia), che aveva un talvolta significativo delle prestazioni raggiunto. Per questo motivo, MFC non utilizza la DLL di 4. x e invece comunica direttamente con le interfacce OLE Unicode. A tale scopo, MFC deve convertire in formato Unicode in MBCS quando si effettua una chiamata a un'interfaccia OLE e spesso è necessario convertire in MBCS da Unicode quando si implementa un'interfaccia OLE. Per risolvere il problema in modo efficiente e semplice, un numero di macro sono stato creato per semplificare questa conversione.  
  
 Una delle sfide più impegnative di creazione di un set di questo tipo di macro è l'allocazione della memoria. Perché le stringhe possono essere convertite in posizione, deve essere allocare la memoria per archiviare i risultati convertiti. Questo potrebbe essere stato effettuato con un codice simile al seguente:  
  
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
  
 Questo approccio come una serie di problemi. Il problema principale è che è la quantità di codice per scrivere, testare ed eseguire il debug. Un elemento che è stata chiamata una funzione semplice, è molto più complessi. Inoltre, è un runtime significativo overhead in questo modo. Memoria deve essere allocata nell'heap e liberata ogni volta che viene eseguita una conversione. Infine, il codice sopra riportato sarebbe necessario applicare appropriato `#ifdefs` aggiunto per le compilazioni di Unicode e Macintosh (che non richiedono la conversione da eseguire sul posto).  
  
 Si trova la soluzione consiste nel creare alcune macro quali maschera 1) la differenza tra le diverse piattaforme e 2) utilizzare uno schema di allocazione efficiente della memoria e 3) sono facile da inserire nel codice sorgente. Di seguito è riportato un esempio di una delle definizioni:  
  
```  
#define A2W(lpa) (\  
 ((LPCSTR)lpa == NULL) NULL : (\  
    _convert = (strnlen(lpa)+1),\  
    AfxA2WHelper((LPWSTR) alloca(_convert*2),   
    lpa,
    _convert)\)\)  
```  
  
 Usare questa macro anziché il codice sopra riportato e operazioni sono molto più semplice:  
  
```  
// use it to call OLE here  
USES_CONVERSION;  
pI->SomeFunctionThatNeedsUnicode(T2OLE(lpszA));
```  
  
 Sono presenti chiamate aggiuntive in cui è necessaria la conversione, ma con le macro è semplice ed efficace.  
  
 L'implementazione di ogni macro viene utilizzata la funzione di alloca () per allocare memoria dallo stack anziché nell'heap. Allocazione di memoria dallo stack è molto più veloce di allocazione della memoria nell'heap e la memoria viene liberata automaticamente quando la funzione viene chiusa. Inoltre, le macro di evitare di chiamare **MultiByteToWideChar** (o **WideCharToMultiByte**) più di una volta. Questa operazione viene eseguita assegnando un po' più memoria maggiore di quello necessario. Si sa che un MBC verranno convertite in almeno uno **WCHAR** e che per ogni **WCHAR** avremo un massimo di due byte MBC. Allocando un po' più del necessario, ma sempre sufficiente per gestire la conversione in secondo luogo la seconda chiamata viene evitato chiamata alla funzione di conversione. La chiamata alla funzione helper **AfxA2Whelper** riduce il numero di inserimenti di argomento che deve essere effettuata per eseguire la conversione (di conseguenza, il codice di dimensioni ridotte, rispetto a se chiamato **MultiByteToWideChar**direttamente).  
  
 Per poter per le macro di disporre di spazio per archiviare la lunghezza temporanea, è necessario dichiarare una variabile locale denominata Converti che esegue in ciascuna funzione che utilizza le macro di conversione. Questa operazione viene eseguita richiamando il **USES_CONVERSION** (macro), come illustrato in precedenza nell'esempio.  
  
 Sono disponibili sia macro di conversione generico e macro specifiche OLE. Questi due set diversi di macro sono descritti di seguito. Tutte le macro risiedono in AFXPRIV. H.  
  
## <a name="generic-conversion-macros"></a>Macro di conversione generico  
 Le macro di conversione generico costituiscono il meccanismo sottostante. Nell'esempio di macro e l'implementazione illustrata nella sezione precedente, A2W, è una tale macro "generica". Non è correlato a OLE in modo specifico. Il set di macro generiche elencato di seguito:  
  
```  
A2CW      (LPCSTR) -> (LPCWSTR)  
A2W      (LPCSTR) -> (LPWSTR)  
W2CA      (LPCWSTR) -> (LPCSTR)  
W2A      (LPCWSTR) -> (LPSTR)  
```  
  
 Oltre a eseguire la conversione del testo, esistono anche le macro e funzioni di supporto per la conversione `TEXTMETRIC`, `DEVMODE`, `BSTR`e OLE allocata stringhe. Queste macro non rientrano nell'ambito del presente documento: fare riferimento a AFXPRIV. H per ulteriori informazioni su queste macro.  
  
## <a name="ole-conversion-macros"></a>Macro di conversione OLE  
 Le macro di conversione OLE progettate specificamente per la gestione delle funzioni che prevedono **OLESTR** caratteri. Se si esaminano le intestazioni OLE, si noterà molti riferimenti ai **LPCOLESTR** e **OLECHAR**. Questi tipi vengono utilizzati per fare riferimento al tipo di caratteri utilizzati nelle interfacce OLE in modo che non è specifico per la piattaforma. **OLECHAR** esegue il mapping a `char` in piattaforme Win16 e Macintosh e **WCHAR** in Win32.  
  
 Per mantenere il numero di **#ifdef** di codice al minimo le direttive in MFC è disponibile una macro simile per ogni conversione che in cui sono coinvolti stringhe OLE. Le macro seguenti sono i più comunemente usate:  
  
```  
T2COLE   (LPCTSTR) -> (LPCOLESTR)  
T2OLE   (LPCTSTR) -> (LPOLESTR)  
OLE2CT   (LPCOLESTR) -> (LPCTSTR)  
OLE2T   (LPCOLESTR) -> (LPCSTR)  
```  
  
 Nuovamente, sono disponibili le macro simile per eseguire queste `TEXTMETRIC`, `DEVMODE`, `BSTR`e OLE allocata stringhe. Fare riferimento a AFXPRIV. H per altre informazioni.  
  
## <a name="other-considerations"></a>Altre considerazioni  
 Non utilizzare le macro in un loop. Ad esempio, non si desidera scrivere il tipo di codice seguente:  
  
```  
void BadIterateCode(LPCTSTR lpsz)  
{  
    USES_CONVERSION; 
    for (int ii = 0; ii <10000; ii++)  
    pI->SomeMethod(ii, T2COLE(lpsz));

}  
```  
  
 Il codice sopra riportato potrebbe causare l'allocazione di megabyte di memoria nello stack a seconda di quale il contenuto della stringa `lpsz` è! Anche il tempo per convertire la stringa per ogni iterazione del ciclo. In alternativa, spostare tali conversioni costante all'esterno del ciclo:  
  
```  
void MuchBetterIterateCode(LPCTSTR lpsz)  
{  
    USES_CONVERSION; 
    LPCOLESTR lpszT = T2COLE(lpsz);

    for (int ii = 0; ii <10000; ii++)  
    pI->SomeMethod(ii, lpszT);

}  
```  
  
 Se la stringa non è costante, incapsulare quindi la chiamata al metodo in una funzione. In questo modo il buffer di conversione deve essere liberata ogni volta. Ad esempio:  
  
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
  
 Non restituiscono mai il risultato di una delle macro, a meno che il valore restituito implica la copia dei dati prima il valore restituito. Ad esempio, questo codice non valido:  
  
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
  
 Il codice precedente può essere corretto modificando il valore restituito a un elemento che consente di copiare il valore:  
  
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
  
 Le macro sono facili da inserire nel codice e facile da utilizzare, ma come si può vedere dalle avvertenze precedente, è necessario prestare attenzione quando vengono utilizzate.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

