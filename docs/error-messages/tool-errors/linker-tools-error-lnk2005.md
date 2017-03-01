---
title: Strumenti del linker LNK2005 errore | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- LNK2005
dev_langs:
- C++
helpviewer_keywords:
- LNK2005
ms.assetid: d9587adc-68be-425c-8a30-15dbc86717a4
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 4ac033535632e94a365aa8dafd849f2ab28a3af7
ms.openlocfilehash: bf93f364b3dc7156a62eb1c474177eb7b85c7827
ms.lasthandoff: 02/24/2017

---
# <a name="linker-tools-error-lnk2005"></a>Errore degli strumenti del linker LNK2005
simbolo già definito nell'oggetto  
  
Il `symbol` specificato, visualizzato nel formato decorato, ha più definizioni.  
  
Per altre informazioni, vedere gli articoli della Knowledge Base:  
  
-   [Si verifica un errore LNK2005 quando la libreria CRT e le librerie MFC sono collegate in ordine errato in Visual C++](https://support.microsoft.com/kb/148652)  
  
-   [Correzione: Delete overload globale operatore cause LNK2005](https://support.microsoft.com/kb/140440)  
  
-   [Si ricevono errori LNK2005 quando si compila un progetto .exe eseguibile ATL in Visual C++](https://support.microsoft.com/kb/184235).  
  
Questo errore è seguito dall'errore irreversibile [LNK1169](../../error-messages/tool-errors/linker-tools-error-lnk1169.md).  
  
### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Presenza simultanea di librerie statiche e dinamiche quando si utilizza [/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
2.  Il simbolo è una funzione di package (creata dalla compilazione con [/Gy](../../build/reference/gy-enable-function-level-linking.md)) ed è stato incluso in più file ma modificato tra compilazioni. Ricompilare tutti i file che includono `symbol`.  
  
3.  Il simbolo è definito in modo diverso in due oggetti membro in librerie diverse e sono stati usati entrambi gli oggetti membro.  
  
4.  Un assoluto ha due definizioni, con un valore diverso in ciascuna definizione.  
  
5.  Una variabile è stata dichiarata e definita da un file di intestazione. Tra le possibili soluzioni vi sono le seguenti:  
  
    -   Dichiarare la variabile nel file con estensione h: `extern BOOL MyBool;` quindi assegnarla a quest'ultimo in un file con estensione c o cpp: `BOOL MyBool = FALSE;`.  
  
    -   Dichiarare la variabile [statico](../../cpp/storage-classes-cpp.md#static).  
  
    -   Dichiarare la variabile [selectany](../../cpp/selectany.md).  
  
6.  Si usa uuid.lib con altri file .lib che definiscono GUID, come oledb.lib e adsiid.lib. Ad esempio:  
  
    ```  
    oledb.lib(oledb_i.obj) : error LNK2005: _IID_ITransactionObject  
    already defined in uuid.lib(go7.obj)  
    ```  
  
     Per risolvere il problema, aggiungere [/Force: multiple](../../build/reference/force-force-file-output.md) per le opzioni della riga di comando del linker e accertarsi che UUID. lib sia la prima libreria a cui fa riferimento.
