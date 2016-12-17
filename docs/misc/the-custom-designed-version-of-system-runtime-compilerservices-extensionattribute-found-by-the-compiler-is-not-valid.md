---
title: "La versione personalizzata di &#39;System.Runtime.CompilerServices.ExtensionAttribute&#39; trovata dal compilatore non &#232; valida | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc36558"
  - "bc36558"
helpviewer_keywords: 
  - "BC36558"
ms.assetid: f47d310a-95fd-4340-bda2-21262c217dbb
caps.latest.revision: 16
caps.handback.revision: 16
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La versione personalizzata di &#39;System.Runtime.CompilerServices.ExtensionAttribute&#39; trovata dal compilatore non &#232; valida
La versione personalizzata di 'System.Runtime.CompilerServices.ExtensionAttribute' trovata dal compilatore non è valida. I flag di utilizzo degli attributi devono essere impostati per consentire assembly, classi e metodi.  
  
 La versione personalizzata di <xref:System.Runtime.CompilerServices.ExtensionAttribute?displayProperty=fullName> trovata dal compilatore non imposta i relativi flag di utilizzo degli attributi per consentire l'applicazione dell'attributo ad assembly, metodi e classi. È necessaria l'applicazione ad almeno questi tre elementi di programma.  
  
 **ID errore:** BC36558  
  
### Per correggere l'errore  
  
-   Modificare la definizione dell'attributo per attivare l'applicazione dell'attributo almeno ad assembly, metodi e classi, come illustrato negli esempi seguenti.  
  
-   Usare <xref:System.Runtime.CompilerServices.ExtensionAttribute?displayProperty=fullName> anziché la versione personalizzata.  
  
## Esempio  
 L'esempio seguente usa l'attributo `AttributeUsage` per specificare a quali elementi del programma è possibile applicare la nuova versione di `ExtensionAttribute`. L'esempio specifica tre membri dell'enumerazione `AttributeTargets`: `Assembly`, `Class` e `Method`. L'omissione di uno di questi elementi causerà questo errore.  
  
```  
Namespace System.Runtime.CompilerServices <AttributeUsage(AttributeTargets.Assembly Or _ AttributeTargets.Class Or AttributeTargets.Method)> Class ExtensionAttribute Inherits System.Attribute ' Definitions of methods, fields, and properties. End Class End Namespace  
```  
  
 In alternativa, è possibile consentire l'applicazione di `ExtensionAttribute` a tutti gli elementi del programma usando il membro `All` di `AttributeTargets`.  
  
```  
<AttributeUsage(AttributeTargets.All)>  
```  
  
 L'eliminazione della riga `AttributeUsage`, come illustrato nel codice seguente, produce lo stesso risultato.  
  
```  
Namespace System.Runtime.CompilerServices Class ExtensionAttribute Inherits System.Attribute ' Definitions of methods, fields, and properties. End Class End Namespace  
```  
  
## Vedere anche  
 <xref:System.Runtime.CompilerServices.ExtensionAttribute>   
 [NOT IN BUILD: Cenni preliminari sugli attributi in Visual Basic](http://msdn.microsoft.com/it-it/0d0cff64-892d-4f57-83bd-bef388553d4f)   
 [NOT IN BUILD: Attributi personalizzati in Visual Basic](http://msdn.microsoft.com/it-it/d72d8a5c-8f64-4614-b15b-cad66845d047)   
 [Metodi di estensione](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Procedura: Definire attributi personalizzati](http://msdn.microsoft.com/it-it/039609c4-ec43-4f44-945f-aa3b5b535c6a)   
 [Scrittura di attributi personalizzati](../Topic/Writing%20Custom%20Attributes.md)