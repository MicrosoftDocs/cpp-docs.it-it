---
title: -DLL (compilazione di una DLL) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /dll
dev_langs:
- C++
helpviewer_keywords:
- -DLL linker option
- /DLL linker option [C++]
- exporting DLLs [C++], specifying exports
- DLLs [C++], building
- DLL linker option [C++]
ms.assetid: c7685aec-31d0-490f-9503-fb5171a23609
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1767ac9ef063ace2ee9d567dd9038519afababf8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="dll-build-a-dll"></a>/DLL (compilazione di una DLL)
```  
/DLL  
```  
  
## <a name="remarks"></a>Note  
 L'opzione /DLL compila una DLL come file di output principale. Una DLL contiene in genere le esportazioni che possono essere utilizzate da un altro programma. Sono disponibili tre metodi per la specifica di esportazioni, elencate in ordine di utilizzo consigliato:  
  
1.  [dllexport](../../cpp/dllexport-dllimport.md) nel codice sorgente  
  
2.  Un [esportazioni](../../build/reference/exports.md) istruzione in un file. def  
  
3.  Un [/esportazione](../../build/reference/export-exports-a-function.md) specifica in un comando LINK  
  
 Un programma può utilizzare più di un metodo.  
  
 È possibile compilare una DLL con il **libreria** istruzione di definizione moduli. Le opzioni /BASE e /DLL insieme equivalgono al **libreria** istruzione.  
  
 Non si specifica questa opzione interno dell'ambiente di sviluppo. Questa opzione è utilizzabile solo nella riga di comando. Questa opzione viene impostata quando si crea un progetto di DLL con una creazione guidata applicazione.  
  
 Si noti che se si crea la libreria di importazione in un passaggio preliminare prima della creazione della DLL, è necessario passare lo stesso set di file oggetto quando si compila il file DLL, come è stato passato quando si compila la libreria di importazione.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **le proprietà di configurazione** cartella.  
  
3.  Fare clic su di **generale** pagina delle proprietà.  
  
4.  Modificare il **tipo di configurazione** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCPropertySheet.ConfigurationType%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)