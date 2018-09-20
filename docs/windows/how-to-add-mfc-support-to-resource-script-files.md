---
title: 'Procedura: aggiungere supporto MFC ai file di Script di risorsa (C++) | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.resvw.add.MFC
dev_langs:
- C++
helpviewer_keywords:
- rc files [C++], adding MFC support
- .rc files [C++], adding MFC support
- MFC, adding support to resource scripts files
- resource script files [C++], adding MFC support
ms.assetid: 599dfe9d-ad26-4e34-899c-49b56599e37f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 631a6eb1ea2f992fe33183b5e8d997afb1d8fa40
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46372418"
---
# <a name="how-to-add-mfc-support-to-resource-script-files-c"></a>Procedura: aggiungere supporto MFC ai file di Script di risorsa (C++)

In genere, quando si compila un'applicazione MFC per Windows utilizzando il [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md), la procedura guidata genera un set base di file (incluso un file di risorse (RC)) che contiene le caratteristiche principali di Microsoft Foundation classi (MFC). Tuttavia, se si modifica un file RC per un'applicazione Windows che non è basata su MFC, non sono disponibili le seguenti funzionalità specifiche del framework MFC:

- Creazioni guidate codice MFC

- Stringhe di richiesta di menu

- Contenuti di elenco per controlli casella combinata

- Hosting del controllo ActiveX

Tuttavia, è possibile aggiungere supporto MFC ai file RC esistenti che non lo hanno.

### <a name="to-add-mfc-support-to-rc-files"></a>Per aggiungere supporto MFC ai file RC

1. Aprire il file script di risorsa vuoto.

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Nelle [visualizzazione risorse](../windows/resource-view-window.md), selezionare la cartella delle risorse (ad esempio, RC).

3. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), impostare il **MFC Mode** proprietà **True**.

   > [!NOTE]
   > Oltre a impostare questo flag, il file RC deve essere parte di un progetto MFC. Ad esempio, l'impostazione **modalità MFC** al **True** in un file RC in Win32 project non fornisce alcuna funzionalità di MFC.

## <a name="requirements"></a>Requisiti

MFC

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Editor di risorse](../windows/resource-editors.md)