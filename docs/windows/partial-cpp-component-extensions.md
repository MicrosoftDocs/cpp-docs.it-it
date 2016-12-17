---
title: "partial (Estensioni del componente C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "partial_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "riga parzialmente eseguita"
  - "C++/CX, parziale"
ms.assetid: 43adf1f5-10c5-44aa-a66f-7507e2bdabf8
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# partial (Estensioni del componente C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La parola chiave `partial` consente alle diverse parti della stessa classe di riferimento di essere create indipendentemente e in file diversi.  
  
## Tutti i runtime  
 \(Questa funzionalità del linguaggio si applica solo a [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]\).  
  
## [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)]  
 Per una classe di riferimento che ha due definizioni parziali, la parola chiave `partial` si applica alla prima occorrenza della definizione e in genere questo viene fatto generando automaticamente il codice, così l'utente non deve utilizzare molto spesso quella parola chiave.  Per tutte le definizioni parziali seguenti della classe, omettere il modificatore `partial` dalla parola chiave e dall'identificatore di classe *class\-key*.  Quando il compilatore rileva una classe di riferimento e un identificatore di classe definiti in precedenza ma non la parola chiave `partial`, combina internamente tutte le parti della definizione della classe di riferimento in un'unica definizione.  
  
### Sintassi  
  
```cpp  
  
partial class-key identifier {  
   /* The first part of the partial class definition. This is typically auto-generated*/  
}  
// ...  
class-key identifier {  
   /* The subsequent part(s) of the class definition. The same identifier is specified, but the "partial" keyword is omitted. */  
}  
  
```  
  
### Parametri  
 *class\-key*  
 Una parola chiave che dichiara una classe o una struct supportata da [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  `ref class`, `value class`, `ref struct` o `value struct`.  
  
 *identifier*  
 Nome del tipo definito.  
  
### Osservazioni  
 Una classe parziale supporta scenari in cui si può modificare una parte della definizione di una classe in un file e un software per la generazione automatica del codice, ad esempio la finestra di progettazione XAML, modifica il codice nella stessa classe in un altro file.  Utilizzando una classe parziale, è possibile evitare che la generazione di codice automatica sovrascriva il codice.  In un progetto di Visual Studio, il modificatore `partial` viene applicato automaticamente al file generato.  
  
 Contenuto: Con due eccezioni, una definizione di classe parziale può contenere tutto ciò che è contenuto nella definizione della classe completa se la parola chiave `partial` è stata omessa.  Tuttavia, non è possibile specificare l'accessibilità della classe \(ad esempio, `public partial class X {…};`\) o un `declspec`.  
  
 Gli identificatori di accesso utilizzati in una definizione di classe parziale per *identifier* non influiscono sull'accessibilità predefinita in una definizione di una classe parziale o totale successiva per *identifier*.  Le definizioni inline di membri dati statici sono consentite.  
  
 Dichiarazione: Una definizione parziale di un *identifier* di classe introduce solo l'*identifier* del nome, ma *identifier* non può essere utilizzato in una modalità che richiede una definizione di classe.  L'*identifier* del nome non può essere utilizzato per conoscere le dimensioni di *identifier* o utilizzare una base o un membro di *identifier* fino a quando il compilatore rileva la definizione completa di *identifier*.  
  
 Numero e ordinamento: Ci possono essere zero o più definizioni di classe parziale per *identifier*.  Ogni definizione di classe parziale di *identifier* deve precedere lessicalmente una definizione completa di *identifier* \(se è presente una definizione completa; in caso contrario, la classe non può essere utilizzata se non come dichiarazione di prototipo\) ma non deve precedere una dichiarazione di prototipo per *identifier*.  Tutte i class\-key devono corrispondere.  
  
 Definizione completa: Al momento della definizione completa della classe *identifier*, il comportamento è uguale se la definizione di *identifier* ha dichiarato tutte le classi di base, i membri e così via, nell'ordine in cui sono stati rilevati e definiti nelle classi parziali.  
  
 Template: Una classe parziale non può essere un template.  
  
 Generics: Una classe parziale può essere un generic se la definizione completa può essere generic.  Ma ogni classe parziale e completa deve avere esattamente gli stessi parametri generic, inclusi i nomi dei parametri formali.  
  
 Per ulteriori informazioni su come utilizzare la parola chiave `partial`, vedere [Classi parziali \(C\+\+\/CX\)](http://go.microsoft.com/fwlink/p/?LinkId=249023).  
  
### Requisiti  
 Opzione del compilatore: **\/ZW**  
  
## Common Language Runtime  
 \(Questa funzionalità del linguaggio non si applica a Common Language Runtime\).  
  
## Vedere anche  
 [Classi Parziali \(C\+\+\/CX\)](http://go.microsoft.com/fwlink/p/?LinkId=249023)