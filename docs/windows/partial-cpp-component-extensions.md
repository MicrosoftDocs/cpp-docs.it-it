---
title: partial (estensioni del componente C++) | Documenti Microsoft
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
ms.openlocfilehash: 71c0fc9739e7ef8e1e68c5678ce56fcec4a250c1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33880179"
---
# <a name="partial--c-component-extensions"></a>partial (Estensioni del componente C++)
Il `partial` parola chiave consente di parti diverse della stessa classe di riferimento per essere creati in modo indipendente e in file diversi.  
  
## <a name="all-runtimes"></a>Tutti i runtime  
 (Questa funzionalità del linguaggio si applica solo a Windows Runtime).  
  
## <a name="windows-runtime"></a>Windows Runtime  
 Per una classe di riferimento che dispone di due definizioni parziali, il `partial` (parola chiave) viene applicato alla prima occorrenza della definizione e questa operazione viene in genere eseguita dal codice generato automaticamente, in modo che un programmatore risorse umane non utilizza la parola chiave molto spesso. Per tutte le successive le definizioni parziali della classe, omettere il `partial` modificatore dal *chiave class* identificatore (parola chiave) e la classe. Quando il compilatore rileva una classe di riferimento definita in precedenza e l'identificatore di classe ma non `partial` (parola chiave), combina tutte le parti della definizione della classe di riferimento in una definizione internamente.  
  
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
 *classe di chiave*  
 Una parola chiave che dichiara una classe o struct che è supportato da Windows Runtime. Entrambi `ref class`, `value class`, `ref struct`, o `value struct`.  
  
 *identifier*  
 Il nome del tipo definito.  
  
### <a name="remarks"></a>Note  
 Una classe parziale supporta scenari in cui si modifica una parte di una definizione di classe in un file e il software automaticamente per la generazione di codice, ad esempio, la finestra di progettazione XAML, modifica di codice nella stessa classe in un altro file. Utilizzando una classe parziale, è possibile impedire il generatore di codice automatica sovrascrivere il tuo codice. In un progetto di Visual Studio, il modificatore `partial` viene applicato automaticamente al file generato.  
  
 Sommario: Con due eccezioni, una definizione di classe parziale può contenere qualsiasi elemento che può contenere la definizione di classe completo se il `partial` (parola chiave) è stato omesso. Tuttavia, non è possibile specificare l'accessibilità della classe (ad esempio `public partial class X { ... };`) o un oggetto `declspec`.  
  
 Utilizzato in una definizione di classe parziale per identificatori di accesso *identificatore* non influiscono accessibilità predefinita in una definizione di classe parziale o completo successivo per *identificatore*. Sono consentite le definizioni inline dei membri dati statici.  
  
 Dichiarazione di Una definizione parziale di una classe *identificatore* introduce solo il nome *identificatore*, ma *identificatore* non può essere utilizzato in modo che richiede una classe definizione. Il nome *identificatore* non può essere utilizzato per conoscere le dimensioni di *identificatore*, o usare una base o un membro di *identificatore* fino a quando non dopo che il compilatore rileva la definizione completa della *identificatore*.  
  
 Numero e ordine: possono esservi zero o più definizioni di classe parziale per *identificatore*. Ogni definizione di classe parziale di *identificatore* deve precedere a livello lessicale la definizione completa di *identificatore* (se è presente una definizione completa; in caso contrario, la classe può essere utilizzata solo come se dichiarata in avanti), ma non devono precedere le dichiarazioni con prototipo di *identificatore*. Tutte le chiavi di classe devono corrispondere.  
  
 Definizione completa: al momento della definizione completa della classe *identificatore*, il comportamento è lo stesso come se la definizione di *identificatore* fossero dichiarati tutte le classi di base, i membri, e così via nell'ordine in cui essi sono stati rilevati e definiti nelle classi parziali.  
  
 Modelli: Una classe parziale non può essere un modello.  
  
 I generics: Una classe parziale può essere un oggetto generico se la definizione completa può essere generica. Ma in ogni classe parziale e completo deve avere esattamente lo stessi parametri generici, inclusi i nomi di parametro formale.  
  
 Per ulteriori informazioni sull'utilizzo di `partial` (parola chiave), vedere [classi parziali (C + + CX)](http://go.microsoft.com/fwlink/p/?LinkId=249023).  
  
### <a name="requirements"></a>Requisiti  
 Opzione del compilatore: **/ZW**  
  
## <a name="common-language-runtime"></a>Common Language Runtime  
 (Questa funzionalità del linguaggio non si applica a Common Language Runtime).  
  
## <a name="see-also"></a>Vedere anche  
 [Classi parziali (C + + CX)](http://go.microsoft.com/fwlink/p/?LinkId=249023)