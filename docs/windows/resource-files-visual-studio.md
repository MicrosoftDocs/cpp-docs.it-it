---
title: "Resource Files (Visual Studio) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "resources [Visual Studio]"
  - ".rc files"
  - "resource files"
  - "resource script files"
  - "resource script files, Win-32 based applications"
  - "resource script files, files updated when editing resources"
  - "resources [Visual Studio], types of resource files"
  - "rct files"
  - "resources [C++]"
  - "rc files"
  - "resource files, types of"
  - ".rct files"
  - "resource script files, unsupported types"
ms.assetid: 4d2b6fcc-07cf-4289-be87-83a60f69533c
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Resource Files (Visual Studio)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  Questo materiale si riferisce alle applicazioni desktop di Windows. Per informazioni sulle risorse nelle app [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)], vedere [Definizione delle risorse delle app](http://msdn.microsoft.com/it-it/476ea844-632c-4467-9ce3-966be1350dd4).  
>   
>  Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [Risorse nelle applicazioni](../Topic/Resources%20in%20Desktop%20Apps.md) nella *Guida per gli sviluppatori di .NET Framework.* Dal momento che i progetti gestiti non usano i file di script della risorsa, è necessario aprire le risorse da **Esplora soluzioni**. È possibile usare l'[Editor immagini](../mfc/image-editor-for-icons.md) e l'[Editor binario](../mfc/binary-editor.md) per usare i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Negli editor di risorse di Visual Studio non è supportata la modifica di risorse incorporate. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/it-it/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
 Il termine "file di risorse" può fare riferimento a molti tipi di file, tra cui:  
  
-   File script di risorse \(con estensione rc\) di un programma.  
  
-   File modello di risorse \(con estensione rct\)  
  
-   Una singola risorsa esistente come file autonomo, ad esempio un file bitmap, icona o cursore, a cui fa riferimento un file RC.  
  
-   Un file di intestazione generato dall'ambiente di sviluppo, ad esempio Resource.h, a cui fa riferimento un file RC.  
  
 Le risorse possono essere rilevate anche in [altri tipi di file](../windows/editable-file-types-for-resources.md), ad esempio EXE, DLL e RES. È possibile usare risorse e file di risorse all'interno del progetto e che non fanno parte del progetto corrente. È anche possibile usare file di risorse non creati nell'ambiente di sviluppo di Visual Studio. Ad esempio, è possibile eseguire queste operazioni:  
  
-   Usare file di risorse annidati e inclusi in modo condizionale.  
  
-   Aggiornare le risorse esistenti o convertirle in formato Visual C\+\+.  
  
-   Importare o esportare risorse grafiche nel o dal file di risorse corrente.  
  
-   Includere identificatori \(simboli\) condivisi o di sola lettura che non è possibile modificare tramite l'ambiente di sviluppo.  
  
-   Includere nel file eseguibile \(EXE\) risorse che non richiedono modifiche o che non si vuole modificare durante il progetto corrente, quali risorse condivise da più progetti.  
  
-   Includere tipi di risorse non supportati dall'ambiente di sviluppo.  
  
 Questa sezione descrive le operazioni seguenti:  
  
-   [Creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md)  
  
-   [Creazione di una nuova risorsa](../windows/how-to-create-a-resource.md)  
  
-   [Visualizzazione di risorse in un file script di risorsa](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md)  
  
-   [Apertura di un file script di risorsa in formato testo](../windows/how-to-open-a-resource-script-file-in-text-format.md)  
  
-   [Inclusione di risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md)  
  
-   [Copia di risorse](../windows/how-to-copy-resources.md)  
  
-   [Uso di modelli di risorse \(RCT\)](../windows/how-to-use-resource-templates.md)  
  
-   [Importazione ed esportazione di risorse](../windows/how-to-import-and-export-resources.md)  
  
-   [Tipi di file modificabili per le risorse](../windows/editable-file-types-for-resources.md)  
  
-   [File interessati dalla modifica delle risorse](../windows/files-affected-by-resource-editing.md)  
  
## Requisiti  
 Win32  
  
## Vedere anche  
 [Resource Editors](../mfc/resource-editors.md)   
 [Working with Resource Files](../mfc/working-with-resource-files.md)   
 [Menu e altre risorse](http://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)