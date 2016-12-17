---
title: "Riferimento a XDCMake | Microsoft Docs"
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
  - "xdcmake"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "xdcmake (programma)"
ms.assetid: 14e65747-d000-4343-854b-8393bf01cbac
caps.latest.revision: 17
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Riferimento a XDCMake
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

xdcmake.exe è un programma che compila i file xdc in un file xml.  Un file xdc dal compilatore Visual C\+\+ per ogni file di codice sorgente quando il codice sorgente viene compilato con [\/doc](../build/reference/doc-process-documentation-comments-c-cpp.md) e quando il file di codice sorgente contiene i commenti della documentazione rincarati con i tag XML.  
  
### Per utilizzare xdcmake.exe l'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../misc/how-to-open-project-property-pages.md).  
  
2.  Aprire la cartella **Proprietà di configurazione**.  
  
3.  Fare clic sulla pagina delle proprietà **Commenti al documento XML** XML.  
  
> [!NOTE]
>  le opzioni di xdcmake.exe la riga di comando differiscono dalle opzioni a xdcmake.exe utilizzato nell'ambiente di sviluppo \(pagine delle proprietà.  Per informazioni sull'utilizzo xdcmake.exeambiente di sviluppo, vedere [Pagina delle proprietà dello strumento generatore di documenti XML](../ide/xml-document-generator-tool-property-pages.md).  
  
## Sintassi  
 xdcmake `input_filename options`  
  
## Parametri  
 Dove:  
  
 `input_filename`  
 Il nome dei file xdc utilizzati come input per xdcmake.exe.  Specificare uno o più file xdc o l'utilizzo \*.xdc utilizzare tutti i file xdc nella directory corrente.  
  
 `options`  
 Zero o più dei seguenti:  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|\/? , \/help|Guida per xdcmake.exe.|  
|\/assembly:*nome file*|Consente di specificare il valore del tag di \<assembly\> nel file xml.  Per impostazione predefinita, il valore del tag di \<assembly\> è uguale al nome del file xml.|  
|\/nologo|Non visualizza le informazioni sul copyright.|  
|\/out:*nome file*|Consente di specificare il nome del file xml.  Per impostazione predefinita, il nome del file xml è il primo file xdc elaborato da xdcmake.exe.|  
  
## Note  
 Visual Studio xdcmake.exe richiamerà automaticamente quando si compila un progetto.  È inoltre possibile richiamare xdcmake.exe la riga di comando.  
  
 Vedere [Tag consigliati per i commenti della documentazione](../ide/recommended-tags-for-documentation-comments-visual-cpp.md) per ulteriori informazioni sui commenti della documentazione di aggiunta ai file di codice sorgente.  
  
## Vedere anche  
 [Documentazione di XML](../ide/xml-documentation-visual-cpp.md)