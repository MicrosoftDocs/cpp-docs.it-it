---
title: Aggiunta di file a un'applicazione Win32 vuota | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- empty projects [C++], adding files
- projects [C++], adding items
- blank projects
- files [C++], adding to projects
ms.assetid: 070098e8-0396-49fe-a697-3daa2f1be6de
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2801ddf7169bfd8d9ede93ada28cd4716057661c
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44315743"
---
# <a name="adding-files-to-an-empty-win32-applications"></a>Aggiunta di file a un'applicazione Win32 vuota

### <a name="to-add-your-files-to-an-empty-windows-desktop-application"></a>Per aggiungere i file a un'applicazione desktop di Windows vuota

1. Selezionare la directory in **Esplora soluzioni**.

2. Fare clic con il pulsante destro del mouse sul nome della directory, fare clic su **Aggiungi** dal menu di scelta rapida, quindi scegliere **Elemento esistente**.

3. Nella **finestra di dialogo Aggiungi elemento esistente**, passare ai file da aggiungere al progetto.

4. Fare clic su **OK**.

Per aggiungere i file di origine, intestazione né i file di risorse al progetto, fare doppio clic il **soluzione** nodo **Esplora soluzioni** e aggiungere i file al progetto nello stesso modo. Oggetto **varie** cartella verrà creata per contenere gli altri file nel progetto.

> [!NOTE]
> Prima di compilare il progetto, è necessario specificare le opzioni di compilazione per questi file in modo che vengano inclusi correttamente nell'applicazione finita. Per altre informazioni, vedere [Pagine delle proprietà (Visual C++)](../ide/property-pages-visual-cpp.md) e [Compilazione di programmi C/C++](../build/building-c-cpp-programs.md).

## <a name="see-also"></a>Vedere anche

[Creazione di un'applicazione desktop di Windows vuota](../windows/creating-an-empty-windows-desktop-application.md)  
