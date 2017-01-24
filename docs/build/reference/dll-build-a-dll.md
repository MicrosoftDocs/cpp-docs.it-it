---
title: "/DLL (compilazione di una DLL) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/dll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/DLL (opzione del linker) [C++]"
  - "-DLL (opzione del linker)"
  - "DLL (opzione del linker) [C++]"
  - "DLL [C++], compilazione"
  - "esportazione di DLL [C++], specifica di esportazioni"
ms.assetid: c7685aec-31d0-490f-9503-fb5171a23609
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /DLL (compilazione di una DLL)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/DLL  
```  
  
## Note  
 L'opzione \/DLL compila una DLL come file di output principale.  Una DLL contiene in genere esportazioni utilizzabili in altri programmi.  Sono disponibili tre metodi per la specifica delle esportazioni, elencati di seguito nell'ordine in cui se ne consiglia l'utilizzo:  
  
1.  [\_\_declspec\(dllexport\)](../../cpp/dllexport-dllimport.md) nel codice sorgente  
  
2.  Istruzione [EXPORTS](../../build/reference/exports.md) in un file def  
  
3.  Una specifica [\/EXPORT](../../build/reference/export-exports-a-function.md) in un comando LINK  
  
 In uno stesso programma è possibile che vengano utilizzati più metodi.  
  
 Un altro metodo per compilare una DLL consiste nell'utilizzo dell'istruzione di definizione moduli **LIBRARY**.  L'utilizzo congiunto delle opzioni \/BASE e \/DLL equivale all'utilizzo dell'istruzione **LIBRARY**.  
  
 Non specificare questa opzione all'interno dell'ambiente di sviluppo in quanto è utilizzabile solo alla riga di comando.  L'opzione viene impostata quando si crea un progetto DLL con una Creazione guidata applicazioni.  
  
 Se la libreria di importazione viene creata nel corso di un'operazione preliminare precedente alla creazione della dll, l'insieme di file oggetto da passare durante la compilazione della dll deve corrispondere a quello passato durante la compilazione della libreria di importazione.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Proprietà di configurazione**.  
  
3.  Fare clic sulla pagina delle proprietà **Generale**.  
  
4.  Modificare la proprietà **Tipo configurazione**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCPropertySheet.ConfigurationType%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)