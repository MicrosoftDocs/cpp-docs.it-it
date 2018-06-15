---
title: Supporto della procedura guidata per altre lingue | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.appwiz.EastAsianLanguages
dev_langs:
- C++
helpviewer_keywords:
- wizards [C++], language support
- language support for MFC projects
- projects [C++], language support
ms.assetid: b653c673-0687-455c-885f-15d7e2f4149d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 75aafd7177c3799c17b75419fd5ab9f54af91d35
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33332442"
---
# <a name="wizard-support-for-other-languages"></a>Supporto della procedura guidata per altre lingue
Quando si installa Visual Studio, l'applicazione di installazione rileva le impostazioni locali del sistema e installa uno o più modelli per la lingua appropriata. Ad esempio, per le impostazioni locali Europa occidentale, vengono installate le lingue inglese, francese, italiano, spagnolo e tedesco. Le lingue sono visualizzate nell'elenco della **lingua della risorsa** nella pagina [Tipo di applicazione](../mfc/reference/application-type-mfc-application-wizard.md) della pagina della Creazione guidata applicazione MFC.  
  
## <a name="language-templates"></a>Modelli di lingua  
 Non tutti i modelli vengono installati in tutti i sistemi poiché i modelli sono basati sulla codifica ANSI e non tutte le risorse possono essere modificate in tutti i sistemi. Ad esempio, per impostazione predefinita, non è possibile modificare le risorse giapponesi in un sistema francese.  
  
 Se si utilizza Windows 2000 o versioni successive e si vuole creare un'applicazione MFC in un'altra lingua, è necessario copiare la directory del modello per la lingua appropriata dal supporto di installazione di Visual Studio (disco 1) al sistema.  
  
> [!NOTE]
>  Per modificare il progetto creato, è necessario impostare le impostazioni locali appropriate per la lingua selezionata.  
  
 A ogni modello viene assegnata una cartella nella directory \Microsoft Visual Studio .NET 2003\Vc7\VCWizards\mfcappwiz\templates\, come indicato nella tabella seguente. Per accedere al modello di lingua desiderato, copiare la cartella appropriata nella directory \mfcappwiz\templates\ nel computer. Dopo aver copiato la cartella, la lingua viene visualizzata nell'elenco della **lingua della risorsa** nella pagina **Tipo di applicazione** della pagina della Creazione guidata applicazione MFC.  
  
### <a name="language-templates-provided-in-visual-studio-net"></a>Modelli di lingua inclusi in Visual Studio .NET  
  
|Linguaggio|Modello|  
|--------------|--------------|  
|Cinese (tradizionale)|1028|  
|Cinese (semplificato)|2052|  
|Inglese|1040|  
|Francese|1036|  
|Tedesco|1031|  
|Italiano|1040|  
|Giapponese|1041|  
|Coreano|1042|  
|Spagnolo|3082|  
  
## <a name="format-of-visual-c-wizard-generated-files"></a>Formato dei file creati dalla procedura guidata di Visual C++  
 Quando la versione della lingua installata di Visual Studio non corrisponde alle impostazioni locali di sistema, le procedure guidate di Visual C++ generano progetti in formato Unicode. Ad esempio, quando è installata la versione giapponese di Visual Studio in un computer con le impostazioni internazionali impostate su una lingua diversa dal giapponese, le procedure guidate di Visual C++ generano progetti che includono file Unicode. Ciò si verifica spesso nei computer configurati con MUI Pack di Windows.  
  
 Questo comportamento differisce dai sistemi impostati in modo che le impostazioni locali di sistema corrispondano alla versione di lingua di Visual Studio. In questo caso, i file di progetto vengono creati nel formato ANSI nella tabella codici del sistema.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di file creati per i progetti di Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)   
 [Creazione e gestione di progetti Visual C++](../ide/creating-and-managing-visual-cpp-projects.md)