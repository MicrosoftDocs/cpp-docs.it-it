---
title: Creazione guidata applicazione Win32 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.appwiz.win32.overview
dev_langs:
- C++
helpviewer_keywords:
- Win32 Application Wizard
- Win32 Project Wizard
ms.assetid: 5d7b3a5e-8461-479a-969a-67b7883725b9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 18885e36b5f598a8b1dd6128c29a9e520128dcb2
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="win32-application-wizard"></a>Creazione guidata applicazione Win32
La creazione guidata applicazione Win32 di Visual C++ consente di creare uno dei quattro tipi di progetto (elencati nell'intestazione della tabella seguente). In ogni caso, è possibile specificare opzioni aggiuntive appropriate per il tipo di progetto aperto. La tabella seguente indica quali opzioni sono disponibili per ogni tipo di applicazione.  
  
|Tipo di supporto|Applicazione console|Applicazione (Windows) eseguibile|Libreria a collegamento dinamico|Libreria statica|  
|---------------------|-------------------------|----------------------------------------|---------------------------|--------------------|  
|**Progetto vuoto**|Yes|Sì|Sì|No|  
|**Simboli di esportazione**|No|No|Sì|No|  
|**Intestazione precompilata**|No|No|No|Yes|  
|**Supporto ATL**|Yes|No|No|No|  
|**Supporto MFC**|Yes|No|No|Yes|  
  
## <a name="overview"></a>Panoramica  
 Questa pagina di procedura guidata illustra le impostazioni di progetto correnti per l'applicazione Win32 che si sta creando. Per impostazione predefinita, sono impostate le opzioni seguenti:  
  
-   Il progetto è un'applicazione Windows.  
  
-   Il progetto non è vuoto.  
  
-   Il progetto non contiene simboli di esportazione.  
  
-   Il progetto non usa un file di intestazione precompilata (questa opzione è disponibile solo per progetti di libreria statica).  
  
-   Il progetto non include supporto né per MFC né per ATL.  
  
 Per modificare questi valori predefiniti, fare clic sulla scheda [Impostazioni applicazione](../windows/application-settings-win-32-project-wizard.md) nella colonna sinistra della procedura guidata e apportare le modifiche desiderate.  
  
 Dopo aver creato un'applicazione desktop di Windows, è possibile aggiungere classi C++ generiche usando la procedura guidata per codice [generico](../ide/generic-cpp-class-wizard.md) . È possibile aggiungere altri elementi, quali file HTML, file di intestazione, risorse o file di testo.  
  
> [!NOTE]
>  Non è possibile aggiungere classi ATL ed è possibile aggiungere classi MFC solo a quei tipi di applicazioni desktop di Windows che supportano MFC (vedere la tabella precedente).  
  
 È possibile visualizzare i file creati per il progetto con la procedura guidata in **Esplora soluzioni**. Per altre informazioni sui file creati per il progetto con la procedura guidata, vedere il file ReadMe.txt generato dal progetto. Per altre informazioni sui tipi di file, vedere [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un'applicazione Desktop di Windows vuota](../windows/creating-an-empty-windows-desktop-application.md)   
 [Tipi di progetto Visual C++](../ide/visual-cpp-project-types.md)