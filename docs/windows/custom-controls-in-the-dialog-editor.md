---
title: Controlli personalizzati nell'Editor finestre (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- Custom Control
dev_langs:
- C++
helpviewer_keywords:
- controls [C++], templates
- custom controls [C++], dialog boxes
- custom controls [C++]
- dialog box controls [C++], custom (user) controls
- Dialog Editor [C++], custom controls
ms.assetid: f494b314-4000-4bbe-bbd0-4b18fb71ede1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c1bebca381bc9d6d644ac1aac95b902065268a9d
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44317706"
---
# <a name="custom-controls-in-the-dialog-editor-c"></a>Controlli personalizzati nell'Editor finestre (C++)

L'editor finestre consente di Usa esistente "custom" o "utente" controlli in un modello di finestra di dialogo.

> [!NOTE]
> Controlli personalizzati in questo senso non sono deve essere confusa con i controlli ActiveX. Controlli ActiveX a volte sono stati chiamati controlli OLE personalizzati. Inoltre, non confondere questi controlli con i controlli creati dal proprietario Windows.

Questa funzionalità è progettata per consentire di usare i controlli diversi da quelli forniti da Windows. In fase di esecuzione, il controllo è associato a una classe di finestra (non come una classe C++). Un modo più comune per eseguire la stessa attività consiste nell'installare qualsiasi controllo, ad esempio un controllo statico, nella finestra di dialogo. Quindi in fase di esecuzione, nelle [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog) funzionamento, rimuovere il controllo e sostituirlo con un controllo personalizzato.

Questa è una tecnica precedente. Oggi è consigliabile nella maggior parte dei casi per scrivere un controllo ActiveX o una sottoclasse di un controllo comune di Windows.

Per questi controlli personalizzati, sono limitati a:

- Impostazione del percorso nella finestra di dialogo.

- Se si digita una didascalia.

- Che identifica il nome della classe di Windows del controllo (il codice dell'applicazione deve registrare il controllo con questo nome).

- Digitare un valore esadecimale a 32 bit che imposta lo stile del controllo.

- Impostazione dello stile esteso.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)  
[Controlli](../mfc/controls-mfc.md)