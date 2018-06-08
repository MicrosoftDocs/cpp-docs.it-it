---
title: 'File di informazioni: Panoramica | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- .bsc files, about .bsc files
- bsc files, about bsc files
- browse information files (.bsc)
- browse information files (.bsc), creating
ms.assetid: b5c12832-51f6-4953-8044-4264dd0fb242
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 463bf72c07c775ef0d4965a2023e5699cf7ec715
ms.sourcegitcommit: b04de4e90def1d0f4aa265e96d6b73779d010e1f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/07/2018
ms.locfileid: "34843075"
---
# <a name="building-browse-information-files-overview"></a>Cenni preliminari sulla compilazione di file di informazioni di visualizzazione
Per creare informazioni di visualizzazione per l'esplorazione di simbolo, il compilatore crea un file sbr per ogni file di origine nel progetto, quindi BSCMAKE. EXE concatena i file SBR in un unico file BSC.  
  
 Generazione di file sbr e BSC richiede tempo, in modo Visual C++ consente di disattivare queste funzioni per impostazione predefinita. Se si desidera visualizzare le informazioni correnti, è necessario attivare le opzioni di ricerca e compilare di nuovo il progetto.  
  
 Utilizzare [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) o [/Fr](../../build/reference/fr-fr-create-dot-sbr-file.md) per indicare al compilatore di creare i file SBR. Per creare file BSC, è possibile chiamare [BSCMAKE](../../build/reference/bscmake-command-line.md) dalla riga di comando. Mediante l'utilità BSCMAKE dalla riga di comando offre un controllo più preciso sulla manipolazione dei file di informazioni. Vedere [riferimenti a BSCMAKE](../../build/reference/bscmake-reference.md) per ulteriori informazioni.  
  
> [!TIP]
>  È possibile attivare la generazione di file SBR lasciando disattivata la generazione del file BSC. In questo modo fast compila ma consente anche di creare rapidamente un nuovo file BSC attivando la generazione di file BSC e compilazione del progetto.  
  
 È possibile ridurre il tempo, memoria e spazio su disco necessario per compilare un file BSC riducendo le dimensioni del file BSC.  
  
 Vedere [pagina delle proprietà Generale (progetto)](../../ide/general-property-page-project.md) per informazioni su come creare un file del browser nell'ambiente di sviluppo.  
  
### <a name="to-create-a-smaller-bsc-file"></a>Per creare un file BSC più piccolo  
  
1.  Utilizzare [opzioni della riga di comando di BSCMAKE](../../build/reference/bscmake-options.md) per escludere informazioni dal file di informazioni di visualizzazione.  
  
2.  Omette i simboli locali in uno o più file SBR durante la compilazione o l'assemblaggio.  
  
3.  Se un file oggetto non contiene informazioni necessarie per la fase di debug corrente, omettere il corrispondente file sbr dal comando BSCMAKE quando si ricompila il file di informazioni.  
  
### <a name="to-combine-the-browse-information-from-several-projects-into-one-browser-file-bsc"></a>Per combinare le informazioni di esplorazione da diversi progetti in un unico file (BSC)  
  
1.  Non compilare il file BSC al livello del progetto oppure utilizzare l'opzione /n per impedire che i file SBR vengano troncati.  
  
2.  Dopo che tutti i progetti vengono compilati, eseguire BSCMAKE con tutti i file sbr come input. Sono consentiti caratteri jolly. Ad esempio, se si dispone di directory di progetto C:\X C:\Y e C:\Z con i file sbr e si desidera combinarli in un unico file BSC, quindi usare BSCMAKE C:\X\\\*SBR C:\Y\\\*SBR C:\Z\\ \*SBR /o c:\whatever_directory\combined.bsc per compilare il file BSC combinato.  
  
## <a name="see-also"></a>Vedere anche  
 [Strumenti di compilazione di C/C++](../../build/reference/c-cpp-build-tools.md)   
 [Riferimento a BSCMAKE](../../build/reference/bscmake-reference.md)
