---
title: File di risorse (Visual Studio) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- resources [Visual Studio]
- .rc files
- resource files
- resource script files
- resource script files, Win-32 based applications
- resource script files, files updated when editing resources
- resources [Visual Studio], types of resource files
- rct files
- resources [C++]
- rc files
- resource files, types of
- .rct files
- resource script files, unsupported types
ms.assetid: 4d2b6fcc-07cf-4289-be87-83a60f69533c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5bb14f9581a521345772cd72348b40db3f80496a
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43678371"
---
# <a name="resource-files-visual-studio"></a>File di risorse (Visual Studio)

> [!NOTE]
> Questo materiale si riferisce alle applicazioni desktop di Windows. Per informazioni sulle risorse nelle App della piattaforma Windows universale, vedere [definizione delle risorse dell'App](/windows/uwp/app-resources/).
>
> Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).
>
> Dal momento che i progetti gestiti non usano i file di script della risorsa, è necessario aprire le risorse da **Esplora soluzioni**. È possibile usare l' [Editor immagini](../windows/image-editor-for-icons.md) e l' [Editor binario](binary-editor.md) per usare i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate.

Il termine "file di risorse" può fare riferimento a molti tipi di file, tra cui:

- File script di risorse (con estensione rc) di un programma.

- File modello di risorse (con estensione rct)

- Una singola risorsa esistente come file autonomo, ad esempio un file bitmap, icona o cursore, a cui fa riferimento un file RC.

- Un file di intestazione generato dall'ambiente di sviluppo, ad esempio Resource.h, a cui fa riferimento un file RC.

Le risorse possono essere rilevate anche in [altri tipi di file](../windows/editable-file-types-for-resources.md) , ad esempio EXE, DLL e RES. È possibile usare risorse e file di risorse all'interno del progetto e che non fanno parte del progetto corrente. È anche possibile usare file di risorse non creati nell'ambiente di sviluppo di Visual Studio. Ad esempio, è possibile eseguire queste operazioni:

- Usare file di risorse annidati e inclusi in modo condizionale.

- Aggiornare le risorse esistenti o convertirle in formato Visual C++.

- Importare o esportare risorse grafiche nel o dal file di risorse corrente.

- Includere identificatori (simboli) condivisi o di sola lettura che non è possibile modificare tramite l'ambiente di sviluppo.

- Includere nel file eseguibile (EXE) risorse che non richiedono modifiche o che non si vuole modificare durante il progetto corrente, quali risorse condivise da più progetti.

- Includere tipi di risorse non supportati dall'ambiente di sviluppo.

Questa sezione descrive le operazioni seguenti:

- [Creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md)

- [Creazione di una nuova risorsa](../windows/how-to-create-a-resource.md)

- [Visualizzazione di risorse in un file script di risorsa](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)

- [Apertura di un file script di risorsa in formato testo](../windows/how-to-open-a-resource-script-file-in-text-format.md)

- [Inclusione di risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md)

- [Copia di risorse](../windows/how-to-copy-resources.md)

- [Uso di modelli di risorse (RCT)](../windows/how-to-use-resource-templates.md)

- [Importazione ed esportazione di risorse](../windows/how-to-import-and-export-resources.md)

- [Tipi di file modificabili per le risorse](../windows/editable-file-types-for-resources.md)

- [File interessati dalla modifica delle risorse](../windows/files-affected-by-resource-editing.md)

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)  
[Uso di file di risorse](../windows/working-with-resource-files.md)  
[Menu e altre risorse](https://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)