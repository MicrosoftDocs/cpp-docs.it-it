---
title: -CLRTHREADATTRIBUTE (impostare l'attributo Thread CLR) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.CLRThreadAttribute
dev_langs:
- C++
helpviewer_keywords:
- /CLRTHREADATTRIBUTE linker option
- -CLRTHREADATTRIBUTE linker option
ms.assetid: 4907e9ef-5031-446c-aecf-0a0b32fae1e8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b83c3df380b07f125bad8426b9bf18b013b606c8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32373423"
---
# <a name="clrthreadattribute-set-clr-thread-attribute"></a>/CLRTHREADATTRIBUTE (Imposta l'attributo thread CLR)
Specificare in modo esplicito l'attributo threading per il punto di ingresso del programma CLR.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/CLRTHREADATTRIBUTE:{STA|MTA|NONE}  
```  
  
#### <a name="parameters"></a>Parametri  
 MTA  
 Applica l'attributo MTAThreadAttribute al punto di ingresso del programma.  
  
 NESSUNO  
 Equivale a non specificare /CLRTHREADATTRIBUTE.  Consente di impostare l'attributo threading predefinito Common Language Runtime (CLR).  
  
 STA  
 Applica l'attributo STAThreadAttribute al punto di ingresso del programma.  
  
## <a name="remarks"></a>Note  
 L'impostazione dell'attributo thread è valida solo quando si compila un .exe, poiché influisce sul punto di ingresso del thread principale.  
  
 Se si utilizza il punto di ingresso predefinito (main o wmain, ad esempio) specificare il modello di threading utilizzando /CLRTHREADATTRIBUTE o posizionando l'attributo threading (STAThreadAttribute o MTAThreadAttribute) nella funzione voce predefinita.  
  
 Se si utilizza un punto di ingresso non predefinito, specificare il modello di threading utilizzando /CLRTHREADATTRIBUTE o inserendo il threading attributo per la funzione di ingresso non predefinito e quindi specificare il punto di ingresso non predefinito con [/ENTRY](../../build/reference/entry-entry-point-symbol.md) .  
  
 Se il modello di threading specificato nel codice sorgente non accettano il modello di threading specificato con /CLRTHREADATTRIBUTE, il linker verrà ignorato e applicare il modello di threading specificato nel codice sorgente.  
  
 Sarà necessario per poter utilizzare il threading singolo, ad esempio, se il programma CLR contiene un oggetto COM che utilizza il threading singolo.  Se il programma CLR utilizza il multithreading, è possibile ospitare un oggetto COM che utilizza il threading singolo.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **avanzate** pagina delle proprietà.  
  
5.  Modificare il **attributo Thread CLR** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRThreadAttribute%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)