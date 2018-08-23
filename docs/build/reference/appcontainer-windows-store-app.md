---
title: /APPCONTAINER (UWP/Microsoft Store App) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
ms.assetid: 9a432db5-7640-460b-ab18-6f61fa7daf6f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: eab6a9bd8ac37dec250739e3554c370726dce9eb
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42589577"
---
# <a name="appcontainer-microsoft-store-app"></a>/APPCONTAINER (App di Microsoft Store)
Specifica se il linker viene creata un'immagine eseguibile che deve essere eseguita in un contenitore di app.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/APPCONTAINER[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, /APPCONTAINER è disattivato.  
  
 Questa opzione consente di modificare un file eseguibile per indicare se l'app deve essere eseguito nell'ambiente di isolamento dei processi di appcontainer. Specificare /APPCONTAINER per un'app che deve essere eseguito nell'ambiente appcontainer, ad esempio, un'app Universal Windows Platform (UWP) o Windows Phone 8.x. (L'opzione è impostata automaticamente in Visual Studio quando si crea un'app di Windows universale da un modello.) Per un'app desktop, specificare /appcontainer: No oppure omettere semplicemente l'opzione.  
  
 L'opzione /APPCONTAINER è stata introdotta in Windows 8.  
  
### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere la **Linker** nodo.  
  
4.  Selezionare il **riga di comando** pagina delle proprietà.  
  
5.  Nelle **opzioni aggiuntive**, immettere `/APPCONTAINER` o `/APPCONTAINER:NO`.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)