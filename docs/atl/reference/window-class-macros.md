---
title: Macro di classe di finestra | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- atlwin/ATL::DECLARE_WND_CLASS
- atlwin/ATL::DECLARE_WND_SUPERCLASS
- atlwin/ATL::DECLARE_WND_CLASS_EX
dev_langs: C++
ms.assetid: ce18681a-2bab-4453-9895-0f3ea47c2b24
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bba4b6743477ae3c3d345a20f1c2e672e73261e2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="window-class-macros"></a>Macro di classe di finestra
Queste macro definiscono le utilità di classe di finestra.  
  
|||  
|-|-|  
|[DECLARE_WND_CLASS](#declare_wnd_class)|Consente di specificare il nome di una nuova classe di finestra.| 
|[DECLARE_WND_CLASS2](#declare_wnd_class2)|(2017 di visual Studio) Consente di specificare il nome di una nuova classe della finestra e la classe che utilizzerà la nuova classe il cui routine della finestra.| 
|[DECLARE_WND_SUPERCLASS](#declare_wnd_superclass)|Consente di specificare il nome di una classe finestra esistente su cui basare una nuova classe della finestra.|  
|[DECLARE_WND_CLASS_EX](#declare_wnd_class_ex)|Consente di specificare i parametri di una classe.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
   
##  <a name="declare_wnd_class"></a>DECLARE_WND_CLASS  
 Consente di specificare il nome di una nuova classe di finestra. Inserire la macro nella classe del controllo del controllo ActiveX di ATL.  
  
```
DECLARE_WND_CLASS( WndClassName )
```  
  
### <a name="parameters"></a>Parametri  
 `WndClassName`  
 [in] Il nome della nuova classe di finestra. Se **NULL**, ATL verrà generato un nome di classe di finestra.  
  
### <a name="remarks"></a>Note  
 Se si utilizza l'opzione /permissive-compiler, quindi DECLARE_WND_CLASS genererà un errore del compilatore. In alternativa, usare DECLARE_WND_CLASS2.
 
 DECLARE_WND_CLASS consente di specificare il nome di una nuova classe di finestra le cui informazioni vengono gestite da [CWndClassInfo](cwndclassinfo-class.md). `DECLARE_WND_CLASS`definisce la nuova classe di finestra implementando la seguente funzione statica:  
  
 [!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]  
  
 `DECLARE_WND_CLASS`Specifica gli stili seguenti per la nuova finestra:  
  
-   CS_HREDRAW  
  
-   CS_VREDRAW  
  
-   CS_DBLCLKS  
  
 `DECLARE_WND_CLASS`specifica anche il colore di sfondo della finestra predefinita. Utilizzare il [DECLARE_WND_CLASS_EX](#declare_wnd_class_ex) (macro) per fornire gli stili e il colore di sfondo.  
  
 [CWindowImpl](cwindowimpl-class.md) utilizza il `DECLARE_WND_CLASS` (macro) per creare una finestra in base a una nuova classe della finestra. Per eseguire l'override di questo comportamento, utilizzare il [DECLARE_WND_SUPERCLASS](#declare_wnd_superclass) (macro), o fornire la propria implementazione del [GetWndClassInfo](cwindowimpl-class.md#getwndclassinfo) (funzione).  

  
 Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo [classi di finestra ATL](../../atl/atl-window-classes.md).  

##  <a name="declare_wnd_class2"></a>DECLARE_WND_CLASS2  
 (2017 di visual Studio) Simile a DECLARE_WND_CLASS, ma con un parametro aggiuntivo che consente di evitare un errore di nome dipendente durante la compilazione con il /permissive-option.
  
```
DECLARE_WND_CLASS2( WndClassName, EnclosingClass )
```  
  
### <a name="parameters"></a>Parametri  
 `WndClassName`  
 [in] Il nome della nuova classe di finestra. Se **NULL**, ATL verrà generato un nome di classe di finestra. 

 `EnclosingClass`  
 [in] Il nome della classe della finestra che include la nuova classe di finestra. Non può essere **NULL**.  
  
### <a name="remarks"></a>Note 
Se si utilizza il /permissive-option, DECLARE_WND_CLASS genererà un errore di compilazione perché contiene un nome di dipendente. DECLARE_WND_CLASS2 è necessario assegnare un nome in modo esplicito la classe che questa macro viene usata e non viene generato l'errore sotto il /permissive-flag.
Questa macro è identica a [DECLARE_WND_CLASS](#declare_wnd_class).
   
##  <a name="declare_wnd_superclass"></a>DECLARE_WND_SUPERCLASS  
 Consente di specificare i parametri di una classe. Inserire la macro nella classe del controllo del controllo ActiveX di ATL.  
  
```
DECLARE_WND_SUPERCLASS( WndClassName, OrigWndClassName )
```  
  
### <a name="parameters"></a>Parametri  
 `WndClassName`  
 [in] Il nome della finestra di classe che superclasse verrà `OrigWndClassName`. Se **NULL**, ATL verrà generato un nome di classe di finestra.  
  
 `OrigWndClassName`  
 [in] Il nome di una classe finestra esistente.  
  
### <a name="remarks"></a>Note  
 Questa macro consente di specificare il nome di una classe della finestra che verrà superclasse una classe finestra esistente. [CWndClassInfo](cwndclassinfo-class.md) gestisce le informazioni della superclasse.  
  
 `DECLARE_WND_SUPERCLASS`implementa la funzione statica seguente:  
  
 [!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]  
  
 Per impostazione predefinita, [CWindowImpl](cwindowimpl-class.md) utilizza il [DECLARE_WND_CLASS](#declare_wnd_class) macro per creare una finestra in base a una nuova classe della finestra. Specificando il `DECLARE_WND_SUPERCLASS` macro in un `CWindowImpl`-classe derivata della classe di finestra si baserà su una classe esistente ma utilizzerà routine della finestra. Questa tecnica è denominata creazione di superclassi.  
  
 Oltre a utilizzare il `DECLARE_WND_CLASS` e `DECLARE_WND_SUPERCLASS` macro, è possibile eseguire l'override di [GetWndClassInfo](cwindowimpl-class.md#getwndclassinfo) funzione con la propria implementazione.  

  
 Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo [classi di finestra ATL](../../atl/atl-window-classes.md).  
  
##  <a name="declare_wnd_class_ex"></a>DECLARE_WND_CLASS_EX  
 Consente di specificare il nome di una classe finestra esistente su cui basare una nuova classe della finestra. Inserire la macro nella classe del controllo del controllo ActiveX di ATL.  
  
```
DECLARE_WND_CLASS_EX( WndClassName, style, bkgnd )
```  
  
### <a name="parameters"></a>Parametri  
 `WndClassName`  
 [in] Il nome della nuova classe di finestra. Se **NULL**, ATL verrà generato un nome di classe di finestra.  
  
 `style`  
 [in] Lo stile della finestra.  
  
 *sfondo*  
 [in] Il colore di sfondo della finestra.  
  
### <a name="remarks"></a>Note  
 Questa macro consente di specificare i parametri di classe di una nuova classe di finestra, le cui informazioni vengono gestite da [CWndClassInfo](cwndclassinfo-class.md). `DECLARE_WND_CLASS_EX`definisce la nuova classe di finestra implementando la seguente funzione statica:  
  
 [!code-cpp[NVC_ATL_Windowing#127](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]  
  
 Se si desidera utilizzare un colore di sfondo e gli stili predefiniti, utilizzare il [DECLARE_WND_CLASS](#declare_wnd_class) (macro). Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo [classi di finestra ATL](../../atl/atl-window-classes.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](atl-macros.md)









