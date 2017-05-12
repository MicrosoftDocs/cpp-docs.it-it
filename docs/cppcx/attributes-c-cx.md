---
title: "Attributi (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 4438e03c-4de3-433d-abcc-31aa863bc0e0
caps.latest.revision: 8
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 8
---
# Attributi (C++/CX)
Un attributo è un tipo speciale di classe di riferimento che può essere anteposto tra parentesi quadre ai metodi e ai tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] per specificare determinati comportamenti nella creazione dei metadati. Nel codice [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] sono usati comunemente diversi attributi predefiniti, ad esempio [Windows::Foundation::Metadata::WebHostHidden](http://msdn.microsoft.com/library/windows/apps/windows.foundation.metadata.webhosthiddenattribute.aspx). Nell'esempio riportato di seguito viene mostrata l'applicazione dell'attributo a una classe:  
  
 [!code-cpp[cx_attributes#01](../snippets/cpp/VS_Snippets_Misc/cx_attributes/cpp/class1.h#01)]  
  
## Attributi personalizzati  
 Puoi anche definire attributi personalizzati. Gli attributi personalizzati devono essere conformi alle regole [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)]:  
  
-   Gli attributi personalizzati possono contenere solo campi pubblici.  
  
-   I campi degli attributi personalizzati possono essere inizializzati quando l'attributo viene applicato a una classe.  
  
-   Un campo può essere uno dei seguenti tipi:  
  
    -   int32 \(int\)  
  
    -   uint32 \(int non firmato\)  
  
    -   bool  
  
    -   Platform::String^  
  
    -   Windows::Foundation::HResult  
  
    -   Platform::Type^  
  
    -   classe enum pubblica \(include le enumerazioni definite dall'utente\)  
  
 Nell'esempio riportato di seguito viene mostrato come definire un attributo personalizzato e quindi inizializzarlo quando lo si utilizza.  
  
 [!code-cpp[cx_attributes#02](../snippets/cpp/VS_Snippets_Misc/cx_attributes/cpp/class1.h#02)]  
  
## Vedere anche  
 [Sistema di tipi \(C\+\+\/CX\)](../cppcx/type-system-c-cx.md)   
 [Riferimenti al linguaggio Visual C\+\+](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimenti a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)