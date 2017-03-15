---
title: Stili barra di scorrimento | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- SBS_VERT
- SBS_SIZEBOXBOTTOMRIGHTALIGN
- SBS_LEFTALIGN
- SBS_RIGHTALIGN
- SBS_TOPALIGN
- SBS_SIZEBOXTOPLEFTALIGN
- SBS_BOTTOMALIGN
- SBS_SIZEBOX
- SBS_HORZ
dev_langs:
- C++
helpviewer_keywords:
- SBS_HORZ constant
- SBS_TOPALIGN constant
- SBS_SIZEBOX constant
- SBS_BOTTOMALIGN constant
- SBS_VERT constant
- SBS_LEFTALIGN constant
- SBS_SIZEBOXBOTTOMRIGHTALIGN constant
- scroll bars, styles
- SBS_SIZEBOXTOPLEFTALIGN constant
- SBS_RIGHTALIGN constant
ms.assetid: 8bcde35b-387d-49ae-bdd6-7cda9f5dae26
caps.latest.revision: 12
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 778fe7b0f6f6319884df4ed9c5ccbe8e34bd8d42
ms.lasthandoff: 02/24/2017

---
# <a name="scroll-bar-styles"></a>Stili barra di scorrimento
-   **SBS_BOTTOMALIGN** utilizzato con il **SBS_HORZ** stile. Il bordo inferiore della barra di scorrimento è allineato al bordo inferiore del rettangolo specificato nella **crea** funzione membro. La barra di scorrimento è l'altezza predefinita per le barre di scorrimento di sistema.  
  
-   **SBS_HORZ** definisce una barra di scorrimento orizzontale. Se non si specifica il **SBS_BOTTOMALIGN** né **SBS_TOPALIGN** lo stile è specificato, la barra di scorrimento è l'altezza, larghezza e fornite nella posizione il **crea** funzione membro.  
  
-   **SBS_LEFTALIGN** utilizzato con il **SBS_VERT** stile. Il bordo sinistro della barra di scorrimento è allineato al bordo sinistro del rettangolo specificato nella **crea** funzione membro. La barra di scorrimento è la larghezza predefinita per le barre di scorrimento di sistema.  
  
-   **SBS_RIGHTALIGN** utilizzato con il **SBS_VERT** stile. Il bordo destro della barra di scorrimento è allineato al bordo destro del rettangolo specificato nella **crea** funzione membro. La barra di scorrimento è la larghezza predefinita per le barre di scorrimento di sistema.  
  
-   **SBS_SIZEBOX** indica una casella di dimensioni. Se né il **SBS_SIZEBOXBOTTOMRIGHTALIGN** né **SBS_SIZEBOXTOPLEFTALIGN** lo stile è specificato, la casella di dimensioni è l'altezza, larghezza e posizione al **crea** funzione membro.  
  
-   **SBS_SIZEBOXBOTTOMRIGHTALIGN** utilizzato con il **SBS_SIZEBOX** stile. Nell'angolo inferiore destro della finestra di dimensioni è allineata con l'angolo inferiore destro del rettangolo specificato nella **crea** funzione membro. Nella finestra di dimensioni sono le dimensioni predefinite per le caselle di dimensioni di sistema.  
  
-   **SBS_SIZEBOXTOPLEFTALIGN** utilizzato con il **SBS_SIZEBOX** stile. Nell'angolo superiore sinistro della finestra di dimensioni è allineato con l'angolo superiore sinistro del rettangolo specificato nella **crea** funzione membro. Nella finestra di dimensioni sono le dimensioni predefinite per le caselle di dimensioni di sistema.  
  
-   **SBS_SIZEGRIP** come **SBS_SIZEBOX**, ma con un bordo in rilievo.  
  
-   **SBS_TOPALIGN** utilizzato con il **SBS_HORZ** stile. Il bordo superiore della barra di scorrimento è allineato al bordo superiore del rettangolo specificato nella **crea** funzione membro. La barra di scorrimento è l'altezza predefinita per le barre di scorrimento di sistema.  
  
-   **SBS_VERT** definisce una barra di scorrimento verticale. Se non si specifica il **SBS_RIGHTALIGN** né **SBS_LEFTALIGN** lo stile è specificato, la barra di scorrimento è l'altezza, larghezza e fornite nella posizione il **crea** funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Stili utilizzati da MFC](../../mfc/reference/styles-used-by-mfc.md)   
 [CScrollBar::Create](../../mfc/reference/cscrollbar-class.md#create)   
 [Stili del controllo barra di scorrimento](http://msdn.microsoft.com/library/windows/desktop/bb787533)


