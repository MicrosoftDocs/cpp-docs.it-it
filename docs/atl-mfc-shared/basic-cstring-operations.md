---
title: Le operazioni di base con CString | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- CString objects, basic operations
- string literals, CString operations
- literal strings, CString operations
- CString objects
- string comparison, CString operations
- characters, accessing in CStrings
ms.assetid: 41db66b2-9427-4bb3-845a-9b6869159a6c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b66b6fc5578960e4b6ec9b392622256b66db9cfa
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32359094"
---
# <a name="basic-cstring-operations"></a>Operazioni di base con CString
Questo argomento viene illustrato nell'esempio seguente basic [CString](../atl-mfc-shared/reference/cstringt-class.md) operazioni:  
  
- [Creazione di oggetti CString da stringhe letterali C standard](#_core_creating_cstring_objects_from_standard_c_literal_strings)  
  
- [Accesso ai singoli caratteri in un oggetto CString](#_core_accessing_individual_characters_in_a_cstring)  
  
- [Concatenazione di due oggetti CString](#_core_concatenating_two_cstring_objects)  
  
- [Confronto di oggetti CString](#_core_comparing_cstring_objects)  
  
- [Conversione di oggetti CString](#_core_converting_cstring_objects)  
  
 `Class CString` è basato sul modello di classe [classe CStringT](../atl-mfc-shared/reference/cstringt-class.md). `CString` è un `typedef` di `CStringT`. Più precisamente, `CString` è un `typedef` di un *specializzazione esplicita* di `CStringT`, ovvero un modo comune per utilizzare un modello di classe per definire una classe. Sono classi definite in modo analogo `CStringA` e `CStringW`.  
  
 `CString`, `CStringA`, e `CStringW` sono definite nel atlstr.h. `CStringT` è definito in CStringT. h.  
  
 `CString`, `CStringA`, e `CStringW` ognuno ottenere un set di metodi e operatori definiti da `CStringT` per l'uso con i dati di stringa supportate. Alcuni metodi duplicati e, in alcuni casi, superano i servizi di stringa delle librerie di runtime C.  
  
 Nota: `CString` è una classe nativa. Per una classe di stringa che viene usata in C + + CLI gestiti progetto, utilizzare `System.String`.  
  
##  <a name="_core_creating_cstring_objects_from_standard_c_literal_strings"></a> Creazione di oggetti CString da stringhe letterali C Standard  
 È possibile assegnare stringhe letterali di tipo C per una `CString` esattamente come è possibile assegnare uno `CString` oggetto a un altro.  
  
-   Assegnare il valore di una stringa letterale C a una `CString` oggetto.  
  
 [!code-cpp[NVC_ATLMFC_Utilities#183](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_1.cpp)]  
  
-   Assegnare il valore di uno `CString` a un altro `CString` oggetto.  
  
 [!code-cpp[NVC_ATLMFC_Utilities#184](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_2.cpp)]  
  
     Il contenuto di un `CString` oggetto vengono copiati quando uno `CString` oggetto viene assegnato a un altro. Pertanto, le due stringhe non condividono un riferimento per i caratteri effettivi che costituiscono la stringa. Per ulteriori informazioni su come usare `CString` degli oggetti come valori, vedere [semantica di CString](../atl-mfc-shared/cstring-semantics.md).  
  
    > [!NOTE]
    >  Scrivere l'applicazione in modo che possa essere compilato per Unicode o ANSI, le stringhe letterali utilizzando la macro t. Per ulteriori informazioni, vedere [supporto Unicode e impostare caratteri Multibyte (MBCS)](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md).  
  
##  <a name="_core_accessing_individual_characters_in_a_cstring"></a> Accesso ai singoli caratteri in un oggetto CString  
 È possibile accedere a singoli caratteri di un `CString` oggetto utilizzando il `GetAt` e `SetAt` metodi. È inoltre possibile utilizzare l'elemento o all'indice, operatore di matrice ([]) invece di `GetAt` per ottenere i singoli caratteri. (Assomiglia all'accesso agli elementi di matrice in base all'indice, come le stringhe di tipo C standard.) I valori per `CString` caratteri sono a base zero.  
  
##  <a name="_core_concatenating_two_cstring_objects"></a> Concatenazione di due oggetti CString  
 Per concatenare due `CString` oggetti, utilizzare gli operatori di concatenazione (+ + o), come indicato di seguito.  
  
 [!code-cpp[NVC_ATLMFC_Utilities#185](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_3.cpp)]  
  
 Almeno un argomento per gli operatori di concatenazione (+ + = o) deve essere un `CString` oggetto, ma è possibile usare una stringa di caratteri costante (ad esempio, `"big"`) o un `char` (ad esempio, ' x') per l'altro argomento.  
  
##  <a name="_core_comparing_cstring_objects"></a> Confronto di oggetti CString  
 Il `Compare` (metodo) e l'operatore per `CString` sono equivalenti. `Compare`, `operator==`, e `CompareNoCase` compatibili MBCS e Unicode; `CompareNoCase` è anche tra maiuscole e minuscole. Il `Collate` metodo `CString` viene applicata la distinzione delle impostazioni locali e spesso è più lento `Compare`. Utilizzare `Collate` solo in cui è necessario rispettare l'ordinamento delle regole come specificato dalle impostazioni locali correnti.  
  
 Nella seguente tabella sono disponibili [CString](../atl-mfc-shared/reference/cstringt-class.md) le funzioni di confronto e delle funzioni di formato portabile Unicode/MBCS equivalenti nella libreria di runtime C.  
  
|Funzione di CString|Funzione MBCS|Unicode (funzione)|  
|----------------------|-------------------|----------------------|  
|`Compare`|`_mbscmp`|`wcscmp`|  
|`CompareNoCase`|`_mbsicmp`|`_wcsicmp`|  
|`Collate`|`_mbscoll`|`wcscoll`|  
  
 Il `CStringT` modello di classe definisce gli operatori relazionali (<, \<=, > =, >, = = e! =), che sono disponibili per l'utilizzo da `CString`. È possibile confrontare due `CStrings` tramite questi operatori, come illustrato nell'esempio seguente.  
  
 [!code-cpp[NVC_ATLMFC_Utilities#186](../atl-mfc-shared/codesnippet/cpp/basic-cstring-operations_4.cpp)]  
  
##  <a name="_core_converting_cstring_objects"></a> Conversione di oggetti CString  
 Per informazioni sulla conversione di oggetti CString in altri tipi di stringa, vedere [procedura: convertire tra diversi tipi stringa](../text/how-to-convert-between-various-string-types.md).  
  
## <a name="using-cstring-with-wcout"></a>Uso di CString con wcout  
 Per utilizzare un oggetto CString con `wcout` deve esplicitamente il cast dell'oggetto un `const wchar_t*` come illustrato nell'esempio seguente:  
  
```  
CString cs("meow");

    wcout <<(const wchar_t*) cs <<endl;  
 
```  
  
 Se il cast, `cs` viene considerato come un `void*` e `wcout` stampa l'indirizzo dell'oggetto. Questo comportamento è causato dalle interazioni meno evidenti tra argomento deduzione e overload risoluzione per il modello che si trovano nel loro corretto e conforme allo standard C++.  
  
## <a name="see-also"></a>Vedere anche  
 [Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)   
 [Classe CStringT](../atl-mfc-shared/reference/cstringt-class.md)   
 [Specializzazione di modello](../cpp/template-specialization-cpp.md)   
 [Procedura: Convertire vari tipi di stringhe](../text/how-to-convert-between-various-string-types.md)

