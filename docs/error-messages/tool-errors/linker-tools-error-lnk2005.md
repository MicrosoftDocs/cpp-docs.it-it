---
title: "Errore degli strumenti del linker LNK2005 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK2005"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2005"
ms.assetid: d9587adc-68be-425c-8a30-15dbc86717a4
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# Errore degli strumenti del linker LNK2005
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

simbolo già definito nell'oggetto  
  
 Il `symbol` specificato, visualizzato nel formato decorato, ha più definizioni.  
  
 Per altre informazioni, vedere gli articoli della Knowledge Base:  
  
-   "Si verificano errori LNK2005 quando la libreria CRT e le librerie MFC sono collegate in ordine errato" \(Q148652\)  
  
-   "L'overload globale dell'operatore delete causa errori LNK2005" \(Q140440\)  
  
-   "Si ricevono errori LNK2005 sugli operatori new e delete quando si definisce \_ATL\_MIN\_CRT" \(Q184235\).  
  
 Gli articoli della Knowledge Base sono disponibili nel CD di MSDN Library o all'indirizzo [http:\/\/support.microsoft.com\/search](http://support.microsoft.com/search).  
  
 Questo errore è seguito dall'errore irreversibile [LNK1169](../../error-messages/tool-errors/linker-tools-error-lnk1169.md).  
  
### Per risolverlo è possibile verificare le seguenti cause possibili  
  
1.  Presenza simultanea di librerie statiche e dinamiche quando si usa [\/clr](../../build/reference/clr-common-language-runtime-compilation.md).  
  
2.  Il simbolo è una funzione di package, creata mediante la compilazione con [\/Gy](../../build/reference/gy-enable-function-level-linking.md), ed è stato incluso in più file ma modificato tra compilazioni.  Ricompilare tutti i file che includono `symbol`.  
  
3.  Il simbolo è definito in modo diverso in due oggetti membro in librerie diverse e sono stati usati entrambi gli oggetti membro.  
  
4.  Un assoluto ha due definizioni, con un valore diverso in ciascuna definizione.  
  
5.  Una variabile è stata dichiarata e definita da un file di intestazione.  Tra le possibili soluzioni vi sono le seguenti:  
  
    -   Dichiarare la variabile nel file con estensione h: `extern BOOL MyBool;` quindi assegnarla a quest'ultimo in un file con estensione c o cpp: `BOOL MyBool = FALSE;`.  
  
    -   Dichiarare la variabile [static](../../misc/static-cpp.md).  
  
    -   Dichiarare la variabile [selectany](../../cpp/selectany.md).  
  
6.  Si usa uuid.lib con altri file .lib che definiscono GUID, come oledb.lib e adsiid.lib.  Ad esempio:  
  
    ```  
    oledb.lib(oledb_i.obj) : error LNK2005: _IID_ITransactionObject  
    already defined in uuid.lib(go7.obj)  
    ```  
  
     Per risolvere il problema, aggiungere [\/FORCE:MULTIPLE](../../build/reference/force-force-file-output.md) alle opzioni della riga di comando del linker e accertarsi che uuid.lib sia la prima libreria a cui viene fatto riferimento.