---
title: -MAP (genera file MAP) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /map
- VC.Project.VCLinkerTool.MapFileName
- VC.Project.VCLinkerTool.GenerateMapFile
dev_langs:
- C++
helpviewer_keywords:
- mapfiles, creating linker
- generate mapfile linker option
- mapfile linker option
- mapfiles, information about program being linked
- MAP linker option
- -MAP linker option
- mapfiles, specifying file name
- /MAP linker option
ms.assetid: 9ccce53d-4e36-43da-87b0-7603ddfdea63
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f01daff11d41263766b66ed335c60d4bf83ced45
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="map-generate-mapfile"></a>/MAP (Genera file MAP)
```  
/MAP[:filename]  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *filename*  
 Un nome utente specificato per il file MAP. Sostituisce il nome predefinito.  
  
## <a name="remarks"></a>Note  
 L'opzione /MAP indica al linker di creare un file di mapping.  
  
 Per impostazione predefinita, il linker i nomi file di mapping con il nome base del programma e dall'estensione Map. Facoltativo *filename* consente di ignorare il nome predefinito per un file di mapping.  
  
 Un file di mapping è un file di testo che contiene le informazioni sul programma in corso il collegamento seguente:  
  
-   Il nome del modulo, ovvero il nome del file di base  
  
-   Il timestamp dall'intestazione del file di programma (non dal file system)  
  
-   Un elenco di gruppi nel programma, con l'indirizzo iniziale di ogni gruppo (come *sezione*:*offset*), lunghezza, nome del gruppo e classe  
  
-   Un elenco di simboli pubblici, con ogni indirizzo (come *sezione*:*offset*), simbolo nome, indirizzo di tipo flat e il file con estensione obj in cui è definito il simbolo  
  
-   Il punto di ingresso (come *sezione*:*offset*)  
  
 Il [/MAPINFO](../../build/reference/mapinfo-include-information-in-mapfile.md) opzione specifica informazioni aggiuntive da includere nel file di mapping.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **Debug** pagina delle proprietà.  
  
4.  Modificare il **genera File Map** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateMapFile%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MapFileName%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)