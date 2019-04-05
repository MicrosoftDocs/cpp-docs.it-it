---
title: Creazione di un progetto per il provider
ms.date: 10/22/2018
helpviewer_keywords:
- ATL projects, creating
- OLE DB providers, projects
- projects [C++], creating
ms.assetid: 076a75de-1d4b-486a-bcf8-9c0f6b049fa2
ms.openlocfilehash: dc085b1f663369033947ed2a5577f334dd79c0aa
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59030738"
---
# <a name="creating-a-project-for-the-provider"></a>Creazione di un progetto per il provider

## <a name="to-create-a-project-in-which-the-ole-db-provider-will-reside"></a>Per creare un progetto in cui risiederà il provider OLE DB

1. Nel menu **File** fare clic su **Nuovo** e quindi su **Progetto**.

   Verrà visualizzata la finestra di dialogo **Nuovo progetto** .

1. Nel **tipi di progetto** riquadro, fare clic sui **installati** > **Visual C++** > **MFC/ATL** cartella. Nel **modelli** riquadro, fare clic su **progetto ATL**.

    > [!NOTE]
    > Nelle versioni precedenti di Visual Studio, trovare il tipo di progetto sotto **Installed** > **modelli** > **Visual C++**  >  **ATL**.

1. Nel **Name** casella, immettere un nome per il progetto e quindi fare clic su **OK**.

   Il **Creazione guidata progetto ATL** viene visualizzata.

1. Nel **Creazione guidata progetto ATL**, scegliere **libreria di collegamento dinamico (DLL)** per **tipo di applicazione**.

1. Scegliere **Fine**.

## <a name="see-also"></a>Vedere anche

[Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)