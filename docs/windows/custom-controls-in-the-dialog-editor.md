---
title: Controlli personalizzati nell'Editor finestre | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- Custom Control
dev_langs:
- C++
helpviewer_keywords:
- controls [C++], templates
- custom controls [Visual Studio], dialog boxes
- custom controls [Visual Studio]
- dialog box controls, custom (user) controls
- Dialog editor, custom controls
ms.assetid: f494b314-4000-4bbe-bbd0-4b18fb71ede1
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c507f4d252100055d4ed7f24e9c407bf8edb82d0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="custom-controls-in-the-dialog-editor"></a>Controlli personalizzati nell'editor finestre
L'editor finestre consente di utilizzare esistente "custom" o i controlli in un modello di finestra di dialogo "user".  
  
> [!NOTE]
>  Controlli personalizzati in questo senso non devono essere confusi con i controlli ActiveX. Controlli ActiveX a volte chiamati controlli OLE. Inoltre, non confondere questi controlli con i controlli creati dal proprietario in Windows.  
  
 Questa funzionalità è supportata per l'utilizzo di controlli diversi da quelli forniti da Windows. In fase di esecuzione, il controllo è associato a una classe di finestra (non come una classe C++). Un modo per eseguire la stessa operazione più comune è di installare qualsiasi controllo, ad esempio un controllo statico, nella finestra di dialogo. Quindi in fase di esecuzione, nel [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) funzione, rimuovere il controllo e sostituirlo con un controllo personalizzato.  
  
 Questa è una tecnica precedente. Oggi è consigliabile nella maggior parte dei casi per scrivere un controllo ActiveX o una sottoclasse di un controllo comune di Windows.  
  
 Per questi controlli personalizzati, è possibile eseguire:  
  
-   Impostazione del percorso nella finestra di dialogo.  
  
-   Digitare una didascalia.  
  
-   Che identifica il nome della classe di Windows del controllo (il codice dell'applicazione deve registrare il controllo con questo nome).  
  
-   Digitare un valore esadecimale a 32 bit che imposta lo stile del controllo.  
  
-   Se si imposta lo stile esteso.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)

