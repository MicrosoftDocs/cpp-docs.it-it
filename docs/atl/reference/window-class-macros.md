---
title: Macro di classe finestra | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: ce18681a-2bab-4453-9895-0f3ea47c2b24
caps.latest.revision: 16
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 8cdedc5cfac9d49df812ae6fcfcc548201b1edb5
ms.openlocfilehash: f32926b6efd4ffb9c0541c0574a479c13dac01df
ms.lasthandoff: 02/24/2017

---
# <a name="window-class-macros"></a>Macro di classe di finestra
Queste macro definiscono utilità classe della finestra.  
  
|||  
|-|-|  
|[DECLARE_WND_CLASS](#declare_wnd_class)|Consente di specificare il nome di una nuova classe di finestra.| 
|[DECLARE_WND_CLASS2](#declare_wnd_class2)|(2017 di visual Studio) Consente di specificare il nome di una nuova classe di finestra e la classe contenitore cui routine utilizzerà la nuova classe.| 
|[DECLARE_WND_SUPERCLASS](#declare_wnd_superclass)|Consente di specificare il nome di una classe finestra esistente in cui verrà impostata una nuova classe della finestra.|  
|[DECLARE_WND_CLASS_EX](#declare_wnd_class_ex)|Consente di specificare i parametri di una classe.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
   
##  <a name="a-namedeclarewndclassa--declarewndclass"></a><a name="declare_wnd_class"></a>DECLARE_WND_CLASS  
 Consente di specificare il nome di una nuova classe di finestra. Inserire la macro nella classe di controllo del controllo ActiveX ATL.  
  
```
DECLARE_WND_CLASS( WndClassName )
```  
  
### <a name="parameters"></a>Parametri  
 `WndClassName`  
 [in] Il nome della nuova classe di finestra. Se **NULL**, ATL verrà generato un nome di classe di finestra.  
  
### <a name="remarks"></a>Note  
 Se si utilizza l'opzione /permissive-compiler, quindi DECLARE_WND_CLASS causerà un errore del compilatore. Utilizzare invece DECLARE_WND_CLASS2.
 
 DECLARE_WND_CLASS consente di specificare il nome di una nuova classe di finestra le cui informazioni verranno gestite da [CWndClassInfo](cwndclassinfo-class.md). `DECLARE_WND_CLASS`definisce la nuova classe di finestra implementando la seguente funzione statica:  
  
 [!code-cpp[127 NVC_ATL_Windowing](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]  
  
 `DECLARE_WND_CLASS`Specifica gli stili seguenti per la nuova finestra:  
  
-   CS_HREDRAW  
  
-   CS_VREDRAW  
  
-   CS_DBLCLKS  
  
 `DECLARE_WND_CLASS`Specifica inoltre il colore di sfondo della finestra predefinita. Utilizzare il [DECLARE_WND_CLASS_EX](#declare_wnd_class_ex) (macro) per fornire gli stili e il colore di sfondo.  
  
 [CWindowImpl](cwindowimpl-class.md) utilizza il `DECLARE_WND_CLASS` macro per creare una finestra in base a una nuova classe della finestra. Per ignorare questo comportamento, utilizzare il [DECLARE_WND_SUPERCLASS](#declare_wnd_superclass) (macro), o fornire la propria implementazione di [GetWndClassInfo](cwindowimpl-class.md#getwndclassinfo) (funzione).  

  
 Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo [classi di finestra ATL](../../atl/atl-window-classes.md).  

##  <a name="a-namedeclarewndclass2a--declarewndclass2"></a><a name="declare_wnd_class2"></a>DECLARE_WND_CLASS2  
 (2017 di visual Studio) Simile a DECLARE_WND_CLASS, ma con un parametro aggiuntivo che consente di evitare un errore di nome dipendente durante la compilazione con il /permissive-option.
  
```
DECLARE_WND_CLASS2( WndClassName, EnclosingClass )
```  
  
### <a name="parameters"></a>Parametri  
 `WndClassName`  
 [in] Il nome della nuova classe di finestra. Se **NULL**, ATL verrà generato un nome di classe di finestra. 

 `EnclosingClass`  
 [in] Il nome della classe della finestra che include la nuova classe della finestra. Non può essere **NULL**.  
  
### <a name="remarks"></a>Note 
Se si utilizza il /permissive-option, DECLARE_WND_CLASS causerà un errore di compilazione perché contiene un nome dipendente. DECLARE_WND_CLASS2 richiede un nome in modo esplicito la classe che questa macro viene utilizzata e non viene generato l'errore sotto il /permissive-flag.
Questa macro è identica a [DECLARE_WND_CLASS](#declare_wnd_class).
   
##  <a name="a-namedeclarewndsuperclassa--declarewndsuperclass"></a><a name="declare_wnd_superclass"></a>DECLARE_WND_SUPERCLASS  
 Consente di specificare i parametri di una classe. Inserire la macro nella classe di controllo del controllo ActiveX ATL.  
  
```
DECLARE_WND_SUPERCLASS( WndClassName, OrigWndClassName )
```  
  
### <a name="parameters"></a>Parametri  
 `WndClassName`  
 [in] Il nome della finestra di classe superclasse che verranno `OrigWndClassName`. Se **NULL**, ATL verrà generato un nome di classe di finestra.  
  
 `OrigWndClassName`  
 [in] Il nome di una classe finestra esistente.  
  
### <a name="remarks"></a>Note  
 Questa macro consente di specificare il nome di una classe finestra che verrà superclasse una classe finestra esistente. [CWndClassInfo](cwndclassinfo-class.md) gestisce le informazioni della superclasse.  
  
 `DECLARE_WND_SUPERCLASS`implementa la funzione statica seguente:  
  
 [!code-cpp[127 NVC_ATL_Windowing](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]  
  
 Per impostazione predefinita, [CWindowImpl](cwindowimpl-class.md) utilizza il [DECLARE_WND_CLASS](#declare_wnd_class) macro per creare una finestra in base a una nuova classe della finestra. Specificando il `DECLARE_WND_SUPERCLASS` macro in un `CWindowImpl`-classe derivata la classe finestra si baserà su una classe esistente, ma utilizzerà routine della finestra. Questa tecnica è denominata creazione di superclassi.  
  
 Oltre a utilizzare il `DECLARE_WND_CLASS` e `DECLARE_WND_SUPERCLASS` macro, è possibile eseguire l'override di [GetWndClassInfo](cwindowimpl-class.md#getwndclassinfo) funzione con la propria implementazione.  

  
 Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo [classi di finestra ATL](../../atl/atl-window-classes.md).  
  
##  <a name="a-namedeclarewndclassexa--declarewndclassex"></a><a name="declare_wnd_class_ex"></a>DECLARE_WND_CLASS_EX  
 Consente di specificare il nome di una classe finestra esistente in cui verrà impostata una nuova classe della finestra. Inserire la macro nella classe di controllo del controllo ActiveX ATL.  
  
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
 Questa macro consente di specificare i parametri della classe di una nuova classe di finestra, le cui informazioni verranno gestite da [CWndClassInfo](cwndclassinfo-class.md). `DECLARE_WND_CLASS_EX`definisce la nuova classe di finestra implementando la seguente funzione statica:  
  
 [!code-cpp[127 NVC_ATL_Windowing](../../atl/codesnippet/cpp/window-class-macros_1.cpp)]  
  
 Se si desidera utilizzare un colore di sfondo e gli stili predefiniti, utilizzare il [DECLARE_WND_CLASS](#declare_wnd_class) (macro). Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo [classi di finestra ATL](../../atl/atl-window-classes.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](atl-macros.md)










