---
title: "CString Operations Relating to C-Style Strings | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "casting CString objects"
  - "CString objects, operazioni di base"
  - "C-style strings"
  - "MFC [C++], string handling class"
  - "valori null, Null-terminated string conversion"
  - "standard run-time library string functions"
  - "string arguments"
  - "stringhe (conversione) [C++], C-style strings"
  - "funzioni stringa"
  - "stringhe [C++], class CString"
  - "stringhe [C++], in C"
  - "stringhe [C++], string operations"
ms.assetid: 5048de8a-5298-4891-b8a0-c554b5a3ac1b
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# CString Operations Relating to C-Style Strings
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un oggetto [CString](../atl-mfc-shared/using-cstring.md) contiene i dati di tipo stringa di caratteri.  `CString` eredita il set di [metodi e operatori](../atl-mfc-shared/reference/cstringt-class.md) definiti nel modello di classe [CStringT](../atl-mfc-shared/reference/cstringt-class.md) per l'uso dei dati stringa.  \(`CString` è un `typedef` che ottimizza `CStringT` in modo da usare i dati di tipo carattere supportati da `CString`\).  
  
 `CString` non archivia i dati di tipo carattere internamente come stringa in formato C con terminazione null.  `CString` tiene invece traccia della lunghezza dei dati di tipo carattere in modo da poter controllare con maggiore sicurezza i dati e lo spazio necessario.  
  
 `CString` non accetta stringhe in formato C ma consente di accedere ai dati di tipo carattere come stringa in formato C.  Questo argomento contiene le seguenti sezioni che illustrano come usare l'oggetto `CString` come se fosse una stringa in formato C con terminazione null.  
  
-   [Conversione di stringhe in formato C con terminazione null](#_core_using_cstring_as_a_c.2d.style_null.2d.terminated_string)  
  
-   [Uso delle funzioni per i valori stringa della libreria runtime standard](#_core_working_with_standard_run.2d.time_library_string_functions)  
  
-   [Modifica diretta del contenuto di CString](#_core_modifying_cstring_contents_directly)  
  
-   [Uso di oggetti CString con funzioni con argomenti variabili](#_core_using_cstring_objects_with_variable_argument_functions)  
  
-   [Specifica dei parametri formali di CString](#_core_specifying_cstring_formal_parameters)  
  
##  <a name="_core_using_cstring_as_a_c.2d.style_null.2d.terminated_string"></a> Uso di CString come stringa in formato C con terminazione null  
 Per usare un oggetto `CString` come stringa in formato C, eseguire il cast dell'oggetto a `LPCTSTR`.  Nell'esempio seguente, `CString` restituisce un puntatore a una stringa in formato C con terminazione null di sola lettura.  La funzione `strcpy` inserisce una copia della stringa in formato C nella variabile `myString`.  
  
```  
CString aCString = "A string";  
char myString[256];  
strcpy(myString, (LPCTSTR)aCString);  
  
```  
  
 È possibile usare i metodi di `CString`, ad esempio `SetAt`, per modificare i singoli caratteri nell'oggetto stringa.  Tuttavia, il puntatore `LPCTSTR` è temporaneo e diventerà non valido se vengono apportate modifiche a `CString`.  L'oggetto `CString` può anche uscire dall'ambito ed essere eliminato automaticamente.  È consigliabile ottenere un puntatore `LPCTSTR` aggiornato di un oggetto `CString` ogni volta che ne viene usato uno.  
  
 Talvolta potrebbe essere necessaria una copia dei dati di `CString` da modificare direttamente.  Usare la funzione `strcpy_s` più sicura \(o `_tcscpy_s` per il formato portabile Unicode\/MBCS\) per copiare l'oggetto `CString` in un buffer separato,  dove è possibile modificare i caratteri in modo sicuro, come illustrato nell'esempio seguente.  
  
 [!code-cpp[NVC_ATLMFC_Utilities#189](../atl-mfc-shared/codesnippet/CPP/cstring-operations-relating-to-c-style-strings_1.cpp)]  
  
> [!NOTE]
>  Il terzo argomento per `strcpy_s` \(o `_tcscpy_s` per il formato portabile Unicode\/MBCS\) è `const``wchar_t*` \(Unicode\) o `const``char*` \(ANSI\).  L'esempio precedente passa un oggetto `CString` per questo argomento.  Il compilatore C\+\+ applica automaticamente la funzione di conversione definita per la classe `CString` che converte `CString` in `LPCTSTR`.  La possibilità di definire le operazioni di cast da un tipo a un altro è una delle funzionalità più utili di C\+\+.  
  
##  <a name="_core_working_with_standard_run.2d.time_library_string_functions"></a> Uso delle funzioni per i valori stringa della libreria runtime standard  
 È consigliabile trovare un metodo `CString` per eseguire un'operazione di stringa per cui potrebbe essere necessario usare le funzioni della libreria run\-time C standard come `strcmp` \(o `_tcscmp` per il formato portabile Unicode\/MBCS\).  
  
 Se è necessario usare le funzioni per i valori stringa in formato C della libreria runtime, è possibile usare le tecniche descritte in \_core\_using\_cstring\_as\_a\_c.2d.style\_null.2d.terminated\_string.  È possibile copiare l'oggetto `CString` in un buffer di stringa in formato C equivalente, eseguire le operazioni nel buffer e quindi riassegnare la stringa in formato C risultante a un oggetto `CString`.  
  
##  <a name="_core_modifying_cstring_contents_directly"></a> Modifica diretta del contenuto di CString  
 Nella maggior parte dei casi, è consigliabile usare le funzioni membro di `CString` per modificare il contenuto di un oggetto `CString` o per convertire l'oggetto `CString` in una stringa di caratteri in formato C.  
  
 Ci sono casi in cui è opportuno modificare direttamente il contenuto di `CString`, ad esempio quando si usano le funzioni del sistema operativo che richiedono un buffer di caratteri.  
  
 I metodi `GetBuffer` e `ReleaseBuffer` consentono di accedere al buffer di caratteri interno di un oggetto `CString` e di modificarlo direttamente.  I passaggi seguenti mostrano come usare queste funzioni a tale scopo.  
  
#### Per usare GetBuffer e ReleaseBuffer per accedere al buffer di caratteri interno di un oggetto CString  
  
1.  Chiamare `GetBuffer` per un oggetto `CString` e specificare la lunghezza del buffer necessaria.  
  
2.  Usare il puntatore restituito da `GetBuffer` per scrivere i caratteri direttamente nell'oggetto `CString`.  
  
3.  Chiamare `ReleaseBuffer` per l'oggetto `CString` per aggiornare tutte le informazioni interne sullo stato di `CString`, ad esempio la lunghezza della stringa.  Dopo aver modificato direttamente il contenuto di un oggetto `CString`, è necessario chiamare `ReleaseBuffer` prima di poter chiamare altre funzioni membro di `CString`.  
  
##  <a name="_core_using_cstring_objects_with_variable_argument_functions"></a> Uso di oggetti CString con funzioni con argomenti variabili  
 Alcune funzioni C accettano un numero variabile di argomenti.  Un esempio rilevante è `printf_s`.  A causa del modo in cui questo tipo di funzione è dichiarato, il compilatore non può essere certo del tipo di argomenti né determinare l'operazione di conversione da eseguire per ogni argomento.  Pertanto, è essenziale usare un cast di tipo esplicito per passare un oggetto `CString` a una funzione che accetta un numero variabile di argomenti.  
  
 Per usare un oggetto `CString` in una funzione con argomenti variabili, eseguire il cast in modo esplicito di `CString` a una stringa `LPCTSTR`, come mostrato nell'esempio seguente.  
  
 [!code-cpp[NVC_ATLMFC_Utilities#190](../atl-mfc-shared/codesnippet/CPP/cstring-operations-relating-to-c-style-strings_2.cpp)]  
  
##  <a name="_core_specifying_cstring_formal_parameters"></a> Specifica dei parametri formali di CString  
 Per la maggior parte delle funzioni che richiedono un argomento stringa è consigliabile specificare il parametro formale nel prototipo di funzione come un puntatore `const` a un carattere \(`LPCTSTR`\) anziché `CString`.  Quando si specifica un parametro formale come un puntatore `const` a un carattere, è possibile passare un puntatore a una matrice `TCHAR`, una stringa letterale \[`"hi there"`\] o un oggetto `CString`.  L'oggetto `CString` verrà convertito automaticamente in `LPCTSTR`.  In qualsiasi punto in cui è possibile usare `LPCTSTR`, sarà possibile usare anche un oggetto `CString`.  
  
 È possibile specificare un parametro formale anche come riferimento a una stringa costante, ovvero `const``CString&`, se l'argomento non verrà modificato.  Eliminare il modificatore `const` se la stringa verrà modificata dalla funzione.  Per avere un valore null predefinito, inizializzarlo a una stringa null \[`""`\], come mostrato di seguito:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#191](../atl-mfc-shared/codesnippet/CPP/cstring-operations-relating-to-c-style-strings_3.cpp)]  
  
 Per la maggior parte dei risultati di funzione, è sufficiente restituire un oggetto `CString` per valore.  
  
## Vedere anche  
 [Stringhe](../atl-mfc-shared/strings-atl-mfc.md)   
 [CString Argument Passing](../atl-mfc-shared/cstring-argument-passing.md)