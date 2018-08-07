---
title: partial (estensioni del componente C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- partial_CPP
dev_langs:
- C++
helpviewer_keywords:
- partial
- C++/CX, partial
ms.assetid: 43adf1f5-10c5-44aa-a66f-7507e2bdabf8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 82bd3baab698e013b3bfe506877bbdbf0021794b
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39605932"
---
# <a name="partial--c-component-extensions"></a>partial (Estensioni del componente C++)
Il **parziale** parola chiave consente a parti diverse della stessa classe di riferimento creati in modo indipendente e in file diversi.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 (Questa funzionalità del linguaggio si applica solo al Runtime di Windows).  
  
## <a name="windows-runtime"></a>Windows Runtime  
 Per una classe di riferimento che dispone di due definizioni parziali, il **parziale** (parola chiave) viene applicato alla prima occorrenza della definizione e questa operazione viene in genere eseguita dal codice generato automaticamente, in modo che un programmatore risorse umane non usa la parola chiave molto spesso. Per tutte le definizioni parziali successive della classe, omettere il **parziali** modificatore dal *chiave classe* identifier (parola chiave) e la classe. Quando il compilatore rileva una classe di riferimento definita in precedenza e l'identificatore di classe ma non **parziale** (parola chiave), combina tutte le parti della definizione di classe ref in una definizione internamente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
partial class-key identifier {  
   /* The first part of the partial class definition. 
      This is typically auto-generated */  
}  
// ...  
class-key identifier {  
   /* The subsequent part(s) of the class definition. The same 
      identifier is specified, but the "partial" keyword is omitted. */  
}  
```  
  
### <a name="parameters"></a>Parametri  
 *chiave di classi*  
 Una parola chiave che dichiara una classe o struct che è supportato dal Runtime di Windows. Entrambi **classe di riferimento**, **classe di valori**, **uno struct di riferimento**, oppure **struct di valore**.  
  
 *identifier*  
 Il nome del tipo definito.  
  
### <a name="remarks"></a>Note  
 Una classe parziale supporta scenari in cui si modifica una parte di una definizione di classe in un file e software che genera codice automatico, ad esempio, la finestra di progettazione XAML, ovvero modifica codice nella stessa classe in un altro file. Usando una classe parziale, è possibile impedire il generatore di codice automatici di sovrascrivere il codice. In un progetto di Visual Studio, il **parziale** modificatore viene applicato automaticamente al file generato.  
  
 Contenuto: Con due eccezioni, una definizione di classe parziale può contenere qualsiasi elemento che potrebbe includere la definizione di classe completo se il **parziale** parola chiave è stata omessa. Tuttavia, è possibile specificare l'accessibilità della classe (ad esempio, `public partial class X { ... };`), o un **declspec**.  
  
 Utilizzato in una definizione di classe parziale per gli identificatori di accesso *identifier* accessibilità predefinita in una definizione di classe parziale o completa successiva per non influiscono sui *identificatore*. Sono consentite le definizioni inline dei membri dati statici.  
  
 Dichiarazione di una definizione parziale di una classe *identifier* introduce solo il nome *identificatore*, ma *identificatore* non può essere utilizzato in modo da richiedere una classe definizione. Il nome *identifier* non può essere utilizzato per conoscere la dimensione del *identificatore*, o usare una base o un membro del *identificatore* fino a quando non dopo che il compilatore rileva la definizione completa di *identificatore*.  
  
 Numero e ordinamento: possono essere presenti zero o più definizioni di classe parziale per *identificatore*. Ogni definizione di classe parziale *identifier* deve precedere lessicalmente la definizione completa del *identificatore* (se non è presente una definizione completa; in caso contrario, la classe può essere utilizzata solo come se dichiarazione con prototipo) ma non deve precedere le dichiarazioni con prototipo dei *identificatore*. Classe tutte-le chiavi devono corrispondere.  
  
 Definizione completa: al momento della definizione completa della classe *identifier*, il comportamento è lo stesso come se la definizione del *identificatore* fosse dichiarato tutte le classi di base, i membri e così via nell'ordine in cui essi sono stati rilevati e definiti nelle classi parziali.  
  
 I modelli: Una classe parziale non può essere un modello.  
  
 I generics: Una classe parziale può essere un oggetto generico se la definizione completa potrebbe essere generica. Ma ogni classe completo e parziale deve avere esattamente lo stessi parametri generici, tra cui i nomi dei parametri formali.  
  
 Per altre informazioni su come usare il **parziale** (parola chiave), vedere [classi parziali (C + c++ /CX)](http://go.microsoft.com/fwlink/p/?LinkId=249023).  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: `/ZW`  
  
## <a name="common-language-runtime"></a>Common Language Runtime  
 (Questa funzionalità del linguaggio non si applica a Common Language Runtime).  
  
## <a name="see-also"></a>Vedere anche  
 [Classi parziali (C + c++ /CX)](http://go.microsoft.com/fwlink/p/?LinkId=249023)