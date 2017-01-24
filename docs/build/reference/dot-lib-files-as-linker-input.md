---
title: "File lib come input del linker | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.AdditionalDependencies"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lib (file)"
  - "COFF (file), librerie di importazione"
  - "librerie predefinite [C++]"
  - "librerie predefinite [C++], output del linker"
  - "impostazioni predefinite [C++], librerie"
  - "librerie di importazione, file del linker"
  - "librerie [C++], file LIB come input del linker"
  - "collegamento [C++], OMF (librerie)"
  - "OMF (librerie)"
ms.assetid: dc5d2b1c-2487-41fa-aa71-ad1e0647958b
caps.latest.revision: 15
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# File lib come input del linker
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In LINK vengono accettate librerie standard COFF e librerie di importazione COFF; entrambe presentano in genere l'estensione lib.  Le librerie standard contengono oggetti e vengono create nello strumento LIB.  Le librerie di importazione contengono informazioni sulle esportazioni in altri programmi e vengono create in LINK durante la compilazione di un programma contenente esportazioni o nello strumento LIB.  Per informazioni sull'utilizzo di LIB per la creazione di librerie standard o di importazione, vedere [Riferimenti a LIB](../../build/reference/lib-reference.md).  Per informazioni dettagliate sull'utilizzo di LINK per la creazione di una libreria di importazione, vedere l'opzione [\/DLL](../../build/reference/dll-build-a-dll.md).  
  
 Una libreria viene specificata per LINK come argomento di tipo nome file o come libreria predefinita.  I riferimenti esterni vengono risolti effettuando la ricerca dapprima nelle librerie specificate alla riga di comando, quindi nelle librerie predefinite specificate con l'opzione [\/DEFAULTLIB](../../build/reference/defaultlib-specify-default-library.md), infine nelle librerie predefinite specificate nei file obj.  Se con il nome della libreria viene specificato un percorso, la ricerca della libreria verrà effettuata nella directory indicata.  Se invece non viene specificato alcun percorso, la ricerca verrà effettuata dapprima nella directory da cui viene eseguito LINK, quindi in tutte le directory specificate nella variabile di ambiente LIB.  
  
### Per aggiungere file lib come input del linker nell'ambiente di sviluppo  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Input**.  
  
4.  Modificare la proprietà **Dipendenze aggiuntive**.  
  
### Per aggiungere file lib come input del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalDependencies%2A>.  
  
## Esempio  
 Nell'esempio riportato di seguito viene illustrato come compilare e utilizzare un file lib:  
  
```  
// lib_link_input_1.cpp  
// compile with: /LD  
__declspec(dllexport) int Test() {  
   return 213;  
}  
```  
  
## Esempio  
 Quindi:  
  
```  
// lib_link_input_2.cpp  
// compile with: /EHsc lib_link_input_1.lib  
__declspec(dllimport) int Test();  
#include <iostream>  
int main() {  
   std::cout << Test() << std::endl;  
}  
```  
  
  **213**   
## Vedere anche  
 [File di input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)