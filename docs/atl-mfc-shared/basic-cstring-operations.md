---
title: "Basic CString Operations | Microsoft Docs"
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
  - "caratteri, accessing in CStrings"
  - "CString objects"
  - "CString objects, operazioni di base"
  - "literal strings, CString operations"
  - "stringhe (confronto), CString operations"
  - "stringhe letterali, CString operations"
ms.assetid: 41db66b2-9427-4bb3-845a-9b6869159a6c
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Basic CString Operations
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono descritte le seguenti operazioni di base [CString](../atl-mfc-shared/reference/cstringt-class.md) :  
  
-   [Creando CString oggetti da stringhe standard di valore letterale c](#_core_creating_cstring_objects_from_standard_c_literal_strings)  
  
-   [Accedere ai singoli caratteri in un CString](#_core_accessing_individual_characters_in_a_cstring)  
  
-   [Concatenare due oggetti di CString](#_core_concatenating_two_cstring_objects)  
  
-   [Confrontare gli oggetti di CString](#_core_comparing_cstring_objects)  
  
-   [Per convertire oggetti di CString](#_core_converting_cstring_objects)  
  
 `Class CString` è basato sul modello [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md)della classe.  `CString` è `typedef``CStringT`.  Più preciso, `CString` è `typedef`*di una specializzazione esplicita*`CStringT`, una tecnica comune utilizzare il modello di classe per definire la classe.  Le classi analogamente definite vengono `CStringA` e `CStringW`.  Per ulteriori informazioni sulla specializzazione esplicita, vedere [Creazione di istanze di modelli di classe](../Topic/Class%20Template%20Instantiation.md).  
  
 `CString`, `CStringA`e `CStringW` sono definiti in atlstr.h.  `CStringT` è definito in cstringt.h.  
  
 `CString`, `CStringA`e `CStringW` ognuno ottiene un set di metodi degli operatori e definito da `CStringT` da utilizzare con i dati in formato stringa che supportano.  Alcuni duplicati di metodi, e, supera in alcuni casi i servizi della stringa delle librerie di runtime del linguaggio C.  
  
 Nota: `CString` è una classe nativa.  Per una classe string che serve nel progetto gestito \+\+\/CLI c, utilizzare `System.String`.  
  
##  <a name="_core_creating_cstring_objects_from_standard_c_literal_strings"></a> Creare gli oggetti di CString da stringhe standard di valore letterale c  
 È possibile assegnare stringhe letterali di tipo C a `CString` come è possibile assegnare un oggetto `CString` a un altro.  
  
-   Assegnare il valore della stringa letterale c a un oggetto `CString`.  
  
     [!code-cpp[NVC_ATLMFC_Utilities#183](../atl-mfc-shared/codesnippet/CPP/basic-cstring-operations_1.cpp)]  
  
-   Assegnare il valore di un `CString` a un altro oggetto `CString`.  
  
     [!code-cpp[NVC_ATLMFC_Utilities#184](../atl-mfc-shared/codesnippet/CPP/basic-cstring-operations_2.cpp)]  
  
     Il contenuto di un oggetto `CString` viene copiato quando un oggetto `CString` viene assegnato a un altro.  Di conseguenza, le due stringhe non condividono un riferimento ai caratteri che costituiscono la stringa.  Per ulteriori informazioni su come utilizzare gli oggetti `CString` come valori, vedere [CString Semantics](../atl-mfc-shared/cstring-semantics.md).  
  
    > [!NOTE]
    >  Per scrivere l'applicazione in modo da consentirne la compilazione per Unicode o ANSI, stringhe letterali di codice utilizzando la macro di \_T.  Per ulteriori informazioni, vedere [Supporto per set di caratteri Unicode e multibyte \(MBCS\)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).  
  
##  <a name="_core_accessing_individual_characters_in_a_cstring"></a> Accedere ai singoli caratteri in un CString  
 È possibile accedere ai singoli caratteri in un oggetto `CString` utilizzando i metodi `SetAt` e `GetAt`.  È inoltre possibile utilizzare l'elemento della matrice, o pedice, l'operatore \( \[ \] \) anziché `GetAt` per ottenere i singoli caratteri.  \(Si ricorda accedere agli elementi della matrice tramite l'indice, come nelle stringhe di tipo C standard.\) i valori di indice per i caratteri `CString` sono in base zero.  
  
##  <a name="_core_concatenating_two_cstring_objects"></a> Concatenare due oggetti di CString  
 Per concatenare due oggetti `CString`, utilizzare gli operatori di concatenazione \(\+ o \+\=\), come segue.  
  
 [!code-cpp[NVC_ATLMFC_Utilities#185](../atl-mfc-shared/codesnippet/CPP/basic-cstring-operations_3.cpp)]  
  
 Almeno un argomento agli operatori di concatenazione \(\+ o \+\=\) deve essere un oggetto `CString`, tuttavia è possibile utilizzare una stringa di caratteri costante, ad esempio `"big"`\) o `char`, ad esempio "x "\) per l'altro argomento.  
  
##  <a name="_core_comparing_cstring_objects"></a> Confrontare gli oggetti di CString  
 Il metodo `Compare` e l'operatore di \=\= per `CString` sono equivalenti.  `Compare`, `operator==`e `CompareNoCase` sono MBCS e Unicode sviluppatori; `CompareNoCase` è anche senza distinzione tra maiuscole e minuscole.  Il metodo `Collate``CString` è riservato impostazioni locali e spesso è più lento `Compare`.  Utilizzare `Collate` solo in cui è necessario attenerti alle regole di ordinamento specificate dalle impostazioni locali correnti.  
  
 Nella tabella seguente sono illustrate le funzioni di confronto disponibili [CString](../atl-mfc-shared/reference/cstringt-class.md) e le funzioni dell'equivalente Unicode\/MBCS\-portable nella libreria di runtime del linguaggio C.  
  
|Funzione di CString|Funzione MBCS|Funzione Unicode|  
|-------------------------|-------------------|----------------------|  
|`Compare`|`_mbscmp`|`wcscmp`|  
|`CompareNoCase`|`_mbsicmp`|`_wcsicmp`|  
|`Collate`|`_mbscoll`|`wcscoll`|  
  
 Il modello di classe `CStringT` definisce gli operatori relazionali \(\<, \<\=, \>\=, \>, \=\= e\! \=\), disponibili per l'utilizzo `CString`.  È possibile confrontare due `CStrings` utilizzando questi operatori, come illustrato nell'esempio seguente.  
  
 [!code-cpp[NVC_ATLMFC_Utilities#186](../atl-mfc-shared/codesnippet/CPP/basic-cstring-operations_4.cpp)]  
  
##  <a name="_core_converting_cstring_objects"></a> Per convertire oggetti di CString  
 Per informazioni sulla conversione degli oggetti di CString ad altri tipi di stringa, vedere [Procedura: convertire vari tipi di stringhe](../text/how-to-convert-between-various-string-types.md).  
  
## Utilizzando CString con wcout  
 Per utilizzare un CString con `wcout` è necessario eseguire esplicitamente il cast dell'oggetto a `const wchar_t*` come illustrato nel seguente esempio:  
  
```  
CString cs("meow");  
  wcout << (const wchar_t*) cs << endl;  
  
```  
  
 Senza il cast, `cs` viene considerato `void*` e `wcout` stampa l'indirizzo dell'oggetto.  Questo comportamento è causato dalle interazioni immediatamente evidenti tra la deduzione di argomento di modello e la risoluzione dell'overload che rappresentano direttamente corretti e allo standard C\+\+.  
  
## Vedere anche  
 [Stringhe](../atl-mfc-shared/strings-atl-mfc.md)   
 [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md)   
 [Creazione di istanze di modelli di classe](../Topic/Class%20Template%20Instantiation.md)   
 [Specializzazione esplicita di modelli di classe](../Topic/Explicit%20Specialization%20of%20Class%20Templates.md)   
 [Specializzazione parziale di modelli di classe](../cpp/template-specialization-cpp.md)   
 [Procedura: convertire vari tipi di stringhe](../text/how-to-convert-between-various-string-types.md)