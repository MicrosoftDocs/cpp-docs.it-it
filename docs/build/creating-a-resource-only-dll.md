---
title: Creazione di una DLL di sole risorse
description: Come creare una DLL di sole risorse in Visual Studio.
ms.date: 01/27/2020
helpviewer_keywords:
- resource-only DLLs [C++], creating
- DLLs [C++], creating
ms.assetid: e6b1d4da-7275-467f-a58c-a0a8a5835199
no-loc:
- noentry
ms.openlocfilehash: ef79de77e35cbef6acd4af1cec82a4edc1b7d105
ms.sourcegitcommit: b8c22e6d555cf833510753cba7a368d57e5886db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2020
ms.locfileid: "76821343"
---
# <a name="creating-a-resource-only-dll"></a>Creazione di una DLL di sole risorse

Una DLL di sole risorse è una DLL che non contiene risorse, ad esempio icone, bitmap, stringhe e finestre di dialogo. L'uso di una DLL di sole risorse è un modo efficace per condividere lo stesso set di risorse tra più programmi. È anche un modo efficace per fornire un'applicazione con risorse localizzate per più linguaggi. Per ulteriori informazioni, vedere [risorse localizzate in applicazioni MFC: dll satellite](localized-resources-in-mfc-applications-satellite-dlls.md).

## <a name="create-a-resource-only-dll"></a>Creare una DLL di sole risorse

Per creare una DLL di sole risorse, creare un nuovo progetto DLL di Windows (non MFC) e aggiungere le risorse al progetto:

::: moniker range="vs-2015"

1. Selezionare **progetto Win32** nella finestra di dialogo **nuovo progetto** . Immettere i nomi del progetto e della soluzione, quindi scegliere **OK**.

1. Nella **creazione guidata applicazione Win32**selezionare **Impostazioni applicazione**. Scegliere un **tipo** di applicazione **dll**. In **Opzioni aggiuntive**selezionare **Progetto vuoto**. Scegliere **fine** per creare il progetto.

1. Creare un nuovo script di risorsa contenente le risorse per la DLL, ad esempio una stringa o un menu. Salvare il file.`.rc`

1. Scegliere **Aggiungi elemento esistente**dal menu `.rc` **progetto** , quindi inserire il nuovo file nel progetto.

1. Specificare l'opzione del linker [/NOENTRY](reference/noentry-no-entry-point.md) . `/NOENTRY`impedisce al linker di collegare un riferimento a `_main` alla dll. Questa opzione è necessaria per creare una DLL di sole risorse.

1. Compilare la DLL.

::: moniker-end
::: moniker range=">=vs-2017"

1. Selezionare **creazione guidata desktop di Windows** nella finestra di dialogo **nuovo progetto** e fare clic su **Avanti**. Nella pagina **Configura nuovo progetto** , immettere i nomi del progetto e della soluzione e scegliere **Crea**.

1. Nella finestra di dialogo **progetto desktop Windows** selezionare un **tipo di applicazione** **libreria a collegamento dinamico**. In **Opzioni aggiuntive**selezionare **Progetto vuoto**. Scegliere **OK** per creare il progetto.

1. Creare un nuovo script di risorsa contenente le risorse per la DLL, ad esempio una stringa o un menu. Salvare il file.`.rc`

1. Scegliere **Aggiungi elemento esistente**dal menu `.rc` **progetto** , quindi inserire il nuovo file nel progetto.

1. Specificare l'opzione del linker [/NOENTRY](reference/noentry-no-entry-point.md) . `/NOENTRY`impedisce al linker di collegare un riferimento a `_main` alla dll. Questa opzione è necessaria per creare una DLL di sole risorse.

1. Compilare la DLL.

::: moniker-end

## <a name="use-a-resource-only-dll"></a>Usare una DLL di sole risorse

L'applicazione che usa la DLL di sole risorse deve chiamare [LoadLibraryEx](loadlibrary-and-afxloadlibrary.md) o una funzione correlata per collegarsi in modo esplicito alla dll. Per accedere alle risorse, chiamare le funzioni `FindResource` generiche `LoadResource`e, che funzionano su qualsiasi tipo di risorsa. In alternativa, chiamare una delle funzioni specifiche delle risorse seguenti:

- `FormatMessage`

- `LoadAccelerators`

- `LoadBitmap`

- `LoadCursor`

- `LoadIcon`

- `LoadMenu`

- `LoadString`

L'applicazione deve chiamare `FreeLibrary` al termine dell'uso delle risorse.

## <a name="see-also"></a>Vedere anche

[Uso dei file di risorse](../windows/working-with-resource-files.md)\
[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
