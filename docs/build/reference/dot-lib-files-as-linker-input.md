---
title: . LIB file come Input del Linker | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.AdditionalDependencies
dev_langs:
- C++
helpviewer_keywords:
- OMF libraries
- linking [C++], OMF libraries
- import libraries, linker files
- libraries [C++], .lib files as linker input
- COFF files, import libraries
- default libraries [C++], linker output
- default libraries [C++]
- defaults [C++], libraries
- .lib files
ms.assetid: dc5d2b1c-2487-41fa-aa71-ad1e0647958b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8382e43398c4b6e5241542e6b41fdee8e2f70eff
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32374544"
---
# <a name="lib-files-as-linker-input"></a>File lib come input del linker
COLLEGAMENTO accetta librerie standard COFF e COFF librerie di importazione, che in genere dispongono di estensione. lib. Le librerie standard contengono gli oggetti e vengono create nello strumento LIB. Librerie di importazione contengono informazioni sull'esportazione in altri programmi e vengono create dal collegamento durante la compilazione di un programma che contiene esportazioni o dallo strumento LIB. Per informazioni sull'utilizzo di LIB per creare standard o librerie di importazione, vedere [riferimenti a LIB](../../build/reference/lib-reference.md). Per informazioni dettagliate sull'uso di collegamento per creare una libreria di importazione, vedere il [/DLL](../../build/reference/dll-build-a-dll.md) opzione.  
  
Una libreria di collegamento è specificata come un argomento del nome file o una raccolta predefinita. COLLEGAMENTO di risoluzione dei riferimenti esterni eseguendo una ricerca prima nelle librerie specificate nella riga di comando, quindi nelle librerie predefinite specificate con il [/DEFAULTLIB](../../build/reference/defaultlib-specify-default-library.md) opzione, quindi in librerie predefinite specificate nei file obj. Se viene specificato un percorso con il nome della libreria, collegamento Cerca la libreria in tale directory. Se viene specificato alcun percorso, collegamento ricerca primo nella directory in esecuzione dal collegamento e quindi in tutte le directory specificate nella variabile di ambiente LIB.  
  
## <a name="to-add-lib-files-as-linker-input-in-the-development-environment"></a>Per aggiungere file LIB come input del linker nell'ambiente di sviluppo  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Scegliere il **Input** pagina delle proprietà di **Linker** cartella.  
  
3.  Modificare il **dipendenze aggiuntive** proprietà per aggiungere i file con estensione LIB.  
  
## <a name="to-programmatically-add-lib-files-as-linker-input"></a>A livello di codice aggiungere il file con estensione LIB come input del linker  
  
-   Vedere [AdditionalDependencies](https://msdn.microsoft.com/library/microsoft.visualstudio.vcprojectengine.vclinkertool.additionaldependencies.aspx).  
  
## <a name="example"></a>Esempio  
L'esempio seguente viene illustrato come creare e usare un file con estensione LIB. Innanzitutto, creare un file con estensione LIB:  
  
```cpp  
// lib_link_input_1.cpp  
// compile by using: cl /LD lib_link_input_1.cpp  
__declspec(dllexport) int Test() {  
   return 213;  
}  
```  
  
E quindi, compilare l'esempio utilizzando il file con estensione LIB che appena creato:  
  
```cpp  
// lib_link_input_2.cpp  
// compile by using: cl /EHsc lib_link_input_1.lib lib_link_input_2.cpp   
__declspec(dllimport) int Test();  
#include <iostream>  
int main() {  
   std::cout << Test() << std::endl;  
}  
```  
  
```Output  
213  
```  
  
## <a name="see-also"></a>Vedere anche  
 [File di Input LINK](../../build/reference/link-input-files.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)