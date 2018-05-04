---
title: La creazione di una libreria di importazione e File di esportazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLibrarianTool.ModuleDefinitionFile
- VC.Project.VCLibrarianTool.ExportNamedFunctions
- VC.Project.VCLibrarianTool.GenerateDebug
- VC.Project.VCLibrarianTool.ForceSymbolReferences
dev_langs:
- C++
helpviewer_keywords:
- OUT library manager option
- INCLUDE library manager option
- /DEF library manager option
- exporting data
- import libraries, building
- -INCLUDE library manager option
- /OUT library manager option
- DEF library manager option
- -DEF library manager option
- -OUT library manager option
- /INCLUDE library manager option
- -EXPORT library manager option
- exporting data, export (.exp) files
- /EXPORT library manager option
- EXPORT library manager option
- .lib files
- EXP files
ms.assetid: 2fe4f30a-1dd6-4b05-84b5-0752e1dee354
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 93f817aadf2de826c628a14255ae9257be2f29ba
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="building-an-import-library-and-export-file"></a>Compilazione di una libreria di importazione e di un file di esportazione
Per creare una libreria di importazione ed esportazione di file, utilizzare la sintassi seguente:  
  
```  
LIB /DEF[:deffile] [options] [objfiles] [libraries]  
```  
  
 Quando viene specificata l'opzione /DEF, i file di output LIB Crea da esportazione specifiche che vengono passate nel comando LIB. Sono disponibili tre metodi per la specifica di esportazioni, elencate in ordine di utilizzo consigliato:  
  
1.  Un **dllexport** definizione in uno del *objfiles* o *librerie*  
  
2.  Una specifica di /EXPORT:*nome* nella riga di comando di LIB  
  
3.  Una definizione in un **esportazioni** istruzione in un `deffile`  
  
 Questi sono gli stessi metodi che consentono di specificare le esportazioni durante il collegamento di un programma di esportazione. Un programma può utilizzare più di un metodo. È possibile specificare le parti del comando LIB (ad esempio più *objfiles* o specifiche /EXPORT) in un file di comando nel comando LIB, è possibile in un comando di collegamento.  
  
 Le seguenti opzioni valide per la creazione di una libreria di importazione ed esportazione di file:  
  
 / In uscita: *importare*  
 Esegue l'override del nome di file di output predefinito per il *importare* libreria viene creata. Quando l'opzione /OUT non viene specificato, il nome predefinito è il nome di base del primo oggetto file o della libreria nel comando LIB e l'estensione. lib. Il file di esportazione è assegnato lo stesso nome di base come la libreria di importazione e l'estensione. exp.  
  
 /Export: *entryname*[= *internalname*] [, @ `ordinal`[, **NONAME**]] [, **dati**]  
 Esporta una funzione da un programma per consentire ad altri programmi chiamare la funzione. È inoltre possibile esportare dati (tramite il **dati** parola chiave). Le esportazioni sono in genere definite in una DLL.  
  
 Il *entryname* è il nome dell'elemento di dati o funzione deve essere utilizzato dal programma chiamante. Facoltativamente, è possibile specificare il *internalname* come la funzione nota nel programma di definizione; per impostazione predefinita, *internalname* equivale *entryname*. Il `ordinal` specifica un indice nella tabella di esportazione compreso tra 1 e 65.535; se non si specifica `ordinal`, ne viene assegnato uno. Il **NONAME** (parola chiave) consente di esportare la funzione solo come un numero ordinale, senza un *entryname*. Il **dati** (parola chiave) viene utilizzato per esportare gli oggetti solo dati.  
  
 / INCLUDONO: `symbol`  
 Aggiunge il simbolo specificato alla tabella dei simboli. Questa opzione è utile per forzare l'utilizzo di un oggetto libreria che in caso contrario non sarebbe incluso.  
  
 Si noti che se si crea la libreria di importazione in un passaggio preliminare prima della creazione della DLL, è necessario passare lo stesso set di file oggetto quando si compila il file DLL, come è stato passato quando si compila la libreria di importazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di librerie di importazione e file di esportazione](../../build/reference/working-with-import-libraries-and-export-files.md)