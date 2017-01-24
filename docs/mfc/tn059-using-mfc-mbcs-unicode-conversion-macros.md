---
title: "TN059: utilizzo di macro di conversione MFC MBCS/Unicode | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.mbcs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "macro di conversione [C++]"
  - "conversione di Unicode"
  - "macro [C++], macro di conversione MBCS"
  - "MBCS [C++], macro di conversione"
  - "MFCANS32.DLL"
  - "TN059"
  - "Unicode [C++], macro di conversione"
  - "Unicode [C++], OLE (interfacce)"
ms.assetid: a2aab748-94d0-4e2f-8447-3bd07112a705
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN059: utilizzo di macro di conversione MFC MBCS/Unicode
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota viene descritto come utilizzare le macro per la conversione mbcs\/unicode, definite in AFXPRIV.H.  Queste macro sono utili se l'applicazione si gestiscono direttamente OLE API o per qualche motivo, spesso necessario per eseguire la conversione tra il formato Unicode e MBCS.  
  
## Panoramica  
 In MFC 3.x, una DLL speciale è stato utilizzato \(MFCANS32.DLL automaticamente\) per convertire tra il formato Unicode e MBCS quando le interfacce OLE è stata chiamata.  Questa DLL era un livello quasi trasparente che consente alle applicazioni OLE essere scritta come se le API e le interfacce OLE e MBCS, anche se sono sempre Unicode \(eccetto su Macintosh\).  Sebbene questo livello è applicazioni utili e concedere essere trasferitoe rapidamente da Win16 a Win32 MFC, Microsoft Word, Microsoft Excel e VBA, rappresentano solo alcune delle applicazioni Microsoft utilizzati questa tecnologia\), ha restituito un calo delle prestazioni talvolta significativo.  Per questo motivo, MFC 4.x non utilizza questa DLL e invece non comunica direttamente con interfacce OLE Unicode.  A tale scopo, MFC deve convertire in Unicode in formato MBCS quando effettua una chiamata a un'interfaccia OLE e spesso in necessario convertire nel formato MBCS da Unicode quando si implementa un'interfaccia OLE.  Per gestire questa efficienza e facilmente, varie macro sono state create per rendere questa conversione più semplice.  
  
 Una di dimensioni maggiori transenne di creare tale set di macro è allocazione di memoria.  Poiché le stringhe non possono essere impostati convertito, la nuova memoria per contenere i risultati convertiti deve essere allocata.  Questa operazione può essere eseguita con codice simile al seguente:  
  
```  
// we want to convert an MBCS string in lpszA  
int nLen = MultiByteToWideChar(CP_ACP, 0,lpszA, -1, NULL, NULL);  
LPWSTR lpszW = new WCHAR[nLen];  
MultiByteToWideChar(CP_ACP, 0,   
   lpszA, -1, lpszW, nLen);  
// use it to call OLE here  
pI->SomeFunctionThatNeedsUnicode(lpszW);  
// free the string  
delete[] lpszW;  
```  
  
 Questo approccio come una serie di problemi.  Il problema principale è molto codice da scrivere, il test e debug.  Un'operazione che fosse una chiamata di funzione semplice, è molto più complesso.  Inoltre, un sovraccarico significativo runtime in modo.  La memoria deve essere allocata nell'heap ed essere liberata quando una conversione viene eseguita.  Infine, il codice precedente deve avere aggiunto `#ifdefs` appropriato per le compilazioni di Macintosh e Unicode \(che non richiedono la conversione di aver luogo\).  
  
 La soluzione che è stato fornito di creare alcune macro che 1\) la maschera la differenza tra le diverse piattaforme e 2\) è possibile utilizzare uno schema di allocazione della memoria efficiente e 3\) sono facili da inserire nel codice sorgente esistente.  Di seguito è riportato un esempio di una delle definizioni:  
  
```  
#define A2W(lpa) (\  
    ((LPCSTR)lpa == NULL) ? NULL : (\  
          _convert = (strnlen(lpa)+1),\  
        AfxA2WHelper((LPWSTR) alloca(_convert*2),   
      lpa, _convert)\  
    )\  
)  
```  
  
 Utilizzando questa macro anziché il codice precedente e delle cose sia molto più semplice:  
  
```  
// use it to call OLE here  
USES_CONVERSION;  
pI->SomeFunctionThatNeedsUnicode(T2OLE(lpszA));  
```  
  
 Esistono ulteriori chiamate in cui la conversione è necessaria, ma utilizzando le macro è semplice e valido.  
  
 L'implementazione di ogni macro riportato di seguito la funzione \_alloca\(\) per allocare memoria dallo stack anziché heap.  Allocare memoria dallo stack è molto più veloce della memoria allocando sull'heap e la memoria automaticamente liberata quando la funzione è uscita.  Inoltre, le macro evitano chiamare **MultiByteToWideChar** \(o **WideCharToMultiByte**\) più di uno volta.  Questa operazione viene eseguita allocando un certopiù memoria.  È noto che un MbC convertirà in al massimo un **WCHAR** e che per ogni **WCHAR** avremo al massimo due byte del MbC.  Allocando un poco più necessario, ma sufficiente sempre gestire la conversione la chiamata di seconda seconda chiamata alla funzione di conversione viene evitata.  La chiamata alla funzione di supporto **AfxA2Whelper** ridurre il numero di essere controllati all'argomento che devono essere selezionate per eseguire la conversione \(ciò comporta il più piccolo codice, che se chiami direttamente **MultiByteToWideChar** \).  
  
 Per le macro disponga di spazio per archiviare una lunghezza temporanea, è necessario dichiarare una variabile locale chiamata \_convert per eseguire questa operazione in ogni funzione che utilizza le macro di conversione.  Questa operazione viene eseguita richiamando la macro di **USES\_CONVERSION** come indicato nell'esempio.  
  
 Esistono entrambe le macro generiche di conversione e macro specifiche OLE.  Questi due macro set diversi vengono descritti di seguito.  Tutte le macro si trovano in AFXPRIV.H.  
  
## Macro generiche di conversione  
 Le macro generiche di conversione formano il meccanismo sottostante.  La macro esempio e implementazione visualizzati nella sezione precedente, A2W, è una tale macro "generica".  Non è correlata OLE in modo specifico.  Il set di macro generiche è elencato di seguito:  
  
```  
A2CW      (LPCSTR) -> (LPCWSTR)  
A2W      (LPCSTR) -> (LPWSTR)  
W2CA      (LPCWSTR) -> (LPCSTR)  
W2A      (LPCWSTR) -> (LPSTR)  
```  
  
 Oltre a conversioni di testo, esistono anche macro e funzioni di helper per la conversione `TEXTMETRIC`, `DEVMODE`, `BSTR` e delle stringhe allocate OLE.  Queste macro sono l'ambito di questa discussione \- fare riferimento a AFXPRIV.H per ulteriori informazioni su tali macro.  
  
## Macro OLE di conversione  
 Le macro OLE di conversione sono progettate specificamente per gestire le funzioni che prevedono i caratteri di **OLESTR**.  Se si esaminano le intestazioni OLE, si noteranno molti riferimenti a **LPCOLESTR** e a **OLECHAR**.  Questi tipi vengono utilizzati per fare riferimento al tipo di caratteri utilizzati nelle interfacce OLE in modo da non è specifica della piattaforma.  Mappe di**OLECHAR** a `char` in Win16 e piattaforme Macintosh e a **WCHAR** in Win32.  
  
 Per ridurre al minimo il numero delle direttive di **\#ifdef** nel codice MFC è simile una macro per ogni conversione in cui OLE stringhe perché.  Le seguenti macro sono i più utilizzate:  
  
```  
T2COLE   (LPCTSTR) -> (LPCOLESTR)  
T2OLE   (LPCTSTR) -> (LPOLESTR)  
OLE2CT   (LPCOLESTR) -> (LPCTSTR)  
OLE2T   (LPCOLESTR) -> (LPCSTR)  
```  
  
 Nuovamente, sono simili macro per fare `TEXTMETRIC`, `DEVMODE`, `BSTR` e stringhe allocate OLE.  Fare riferimento a AFXPRIV.H per ulteriori informazioni.  
  
## Altre considerazioni  
 Non utilizzare le macro in un ciclo rigido.  Ad esempio, non si desidera scrivere il seguente tipo di codice:  
  
```  
void BadIterateCode(LPCTSTR lpsz)  
{  
   USES_CONVERSION;  
   for (int ii = 0; ii < 10000; ii++)  
      pI->SomeMethod(ii, T2COLE(lpsz));  
}  
```  
  
 Il codice precedente potrebbe comportare allocare i MB di memoria nello stack a seconda del contenuto della stringa `lpsz` è\!  Inoltre richiede tempo convertire le stringhe in ogni iterazione del ciclo.  Invece, spostare tali conversioni costanti dal ciclo:  
  
```  
void MuchBetterIterateCode(LPCTSTR lpsz)  
{  
   USES_CONVERSION;  
   LPCOLESTR lpszT = T2COLE(lpsz);  
   for (int ii = 0; ii < 10000; ii++)  
      pI->SomeMethod(ii, lpszT);  
}  
```  
  
 Se la stringa non è costante, quindi incapsulare la chiamata al metodo in una funzione.  In questo modo il processo di conversione da liberare ogni volta.  Di seguito è riportato un esempio.  
  
```  
void CallSomeMethod(int ii, LPCTSTR lpsz)  
{  
   USES_CONVERSION;  
   pI->SomeMethod(ii, T2COLE(lpsz));  
}  
  
void MuchBetterIterateCode2(LPCTSTR* lpszArray)  
{  
   for (int ii = 0; ii < 10000; ii++)  
      CallSomeMethod(ii, lpszArray[ii]);  
}  
```  
  
 Non restituisce mai il risultato di una macro, a meno che il valore restituito implichi la creazione di una copia dei dati prima di ripristinare.  Ad esempio, il codice è errato:  
  
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
  
 Il codice precedente potrebbe essere corretto modificando il valore restituito viene impostato su un valore che copiasse il valore:  
  
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
  
 Le macro sono facili da utilizzare e facili da inserire nel codice, ma come è possibile impostare da raccomandazioni precedente, è necessario prestare attenzione quando si utilizza essi.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)