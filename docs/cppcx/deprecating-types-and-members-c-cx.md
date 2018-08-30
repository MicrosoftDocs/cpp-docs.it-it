---
title: Deprecare tipi e membri (C + c++ /CX) | Microsoft Docs
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: language-reference
ms.assetid: b20b01c1-a439-4ff0-8cf3-d7280c492813
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3b2f8ab1c52297a95c89f8ee00053d24baebe39d
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43205480"
---
# <a name="deprecating-types-and-members-ccx"></a>Deprecazione di tipi e membri (C++/CX)
In C + + c++ /CLI CX, deprecazione dei tipi Windows Runtime e i membri per i producer e i consumer utilizzando il [Deprecated](/uwp/api/windows.foundation.metadata.deprecatedattribute) attributo è supportato. Se usi un'API a cui è stato applicato questo attributo, compare un messaggio di avviso in fase di compilazione che indica che l'API è deprecata e inoltre consiglia l'uso di un'API alternativa. Nei tuoi tipi e metodi pubblici puoi applicare questo attributo e fornire il tuo messaggio personalizzato.  
  
> [!CAUTION]
>  Il [Deprecated](/uwp/api/windows.foundation.metadata.deprecatedattribute) attributo deve essere utilizzato solo con tipi Windows Runtime. Per le classi C++ standard e i membri, usare [__declspec(deprecated)](../cpp/deprecated-cpp.md).  
  
### <a name="example"></a>Esempio  
 Il seguente esempio mostra come deprecare le tue API pubbliche, ad esempio in un componente di Windows Runtime. Il secondo parametro, di tipo [Windows: Foundation:: Metadata:: deprecationtype](/uwp/api/windows.foundation.metadata.deprecationtype) specifica se l'API viene deprecata o rimossa. Attualmente è supportato solo il valore DeprecationType::Deprecated. Il terzo parametro nell'attributo specifica la [Windows::Foundation::Metadata::Platform](/uwp/api/windows.foundation.metadata.platformattribute) a cui viene applicato l'attributo.  
  
```  
  
namespace wfm = Windows::Foundation::Metadata;  
  
public ref class Bicycle sealed  
{  
  
public:  
    property double Speed;  
  
    [wfm::Deprecated("Use the Speed property to compute the angular speed of the wheel", wfm::DeprecationType::Deprecate, 0x0)]  
    double ComputeAngularVelocity();  
};  
```  
  
## <a name="supported-targets"></a>Destinazioni supportate  
 Nella seguente tabella sono elencati i costrutti a cui può essere applicato l'attributo Deprecated:  
  
||  
|-|  
|Controllo XAML|  
|delegato|  
|event|  
|campo di enumerazione|  
|enum|  
|struct|  
|metodo|  
|classe|  
|interfaccia|  
|proprietà|  
|campo struct|  
|costruttore con parametri|  
  
## <a name="see-also"></a>Vedere anche  
 [Sistema di tipi](../cppcx/type-system-c-cx.md)   
 [Riferimenti al linguaggio Visual C++](../cppcx/visual-c-language-reference-c-cx.md)   
 [Riferimento a spazi dei nomi](../cppcx/namespaces-reference-c-cx.md)