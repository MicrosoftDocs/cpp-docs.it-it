---
title: Attributi (C + + CX) | Documenti Microsoft
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: language-reference
ms.assetid: 4438e03c-4de3-433d-abcc-31aa863bc0e0
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 627e89c844b97637897c9b5eb6c1cc7e32081fd6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33086844"
---
# <a name="attributes-ccx"></a>Attributi (C++/CX)
Un attributo è un tipo speciale di classe di riferimento che può essere anteposto tra parentesi quadre ai metodi e tipi di Windows Runtime per specificare determinati comportamenti nella creazione dei metadati. Diversi attributi predefiniti, ad esempio, [Windows::Foundation::Metadata::WebHostHidden](http://msdn.microsoft.com/library/windows/apps/windows.foundation.metadata.webhosthiddenattribute.aspx), sono comunemente usati in C + + codice CX. Nell'esempio riportato di seguito viene mostrata l'applicazione dell'attributo a una classe:  
  
 [!code-cpp[cx_attributes#01](../cppcx/codesnippet/CPP/cx_attributes/class1.h#01)]  
  
## <a name="custom-attributes"></a>Attributi personalizzati  
 Puoi anche definire attributi personalizzati. Attributi personalizzati devono essere conformi a queste regole di Windows Runtime:  
  
-   Gli attributi personalizzati possono contenere solo campi pubblici.  
  
-   I campi degli attributi personalizzati possono essere inizializzati quando l'attributo viene applicato a una classe.  
  
-   Un campo può essere uno dei seguenti tipi:  
  
    -   int32 (int)  
  
    -   uint32 (int non firmato)  
  
    -   bool  
  
    -   Platform::String^  
  
    -   Windows::Foundation::HResult  
  
    -   Platform::Type^  
  
    -   classe enum pubblica (include le enumerazioni definite dall'utente)  
  
 Nell'esempio riportato di seguito viene mostrato come definire un attributo personalizzato e quindi inizializzarlo quando lo si utilizza.  
  
 [!code-cpp[cx_attributes#02](../cppcx/codesnippet/CPP/cx_attributes/class1.h#02)]  
  
## <a name="see-also"></a>Vedere anche  
 [Sistema di tipi (C++/CX)](../cppcx/type-system-c-cx.md)   
 [Riferimenti al linguaggio di Visual C++](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimento a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)