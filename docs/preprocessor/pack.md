---
title: "pack | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "pack_CPP"
  - "vc-pragma.pack"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "pack (pragma)"
  - "pragma, pack"
ms.assetid: e4209cbb-5437-4b53-b3fe-ac264501d404
caps.latest.revision: 18
caps.handback.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# pack
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica l'allineamento di compressione per una struttura, un'unione e i membri della classe.  
  
## Sintassi  
  
```  
  
#pragma pack( [ show ] | [ push | pop ] [, identifier ] , n  )  
```  
  
## Note  
 Comprimere una classe vuol dire inserire i suoi membri direttamente in memoria l'uno dopo l'altro. Questo può significare che alcuni o tutti i membri possono essere allineati a un limite inferiore rispetto all'allineamento predefinito dell'architettura di destinazione.  `pack` fornisce il controllo a livello di dichiarazione di dati.  Questo differisce dall'opzione del compilatore [\/Zp](../build/reference/zp-struct-member-alignment.md), che fornisce solo il controllo a livello di modulo.  `pack` diventerà effettivo al primo `struct`, `union` o alla dichiarazione `class` dopo che viene visto il pragma.  `pack` non produce alcun effetto sulle definizioni.  Chiamare `pack` senza argomenti imposta `n` al valore impostato nell'opzione del compilatore **\/Zp**.  Se l'opzione del compilatore non è impostata, il valore predefinito è 8.  
  
 Se si modifica l'allineamento di una struttura, ciò può non utilizzare molto spazio in memoria, ma è possibile osservare una riduzione delle prestazioni o addirittura ottenere un'eccezione generata dall'hardware per l'accesso non allineato.  È possibile modificare questo comportamento dell'eccezione utilizzando [SetErrorMode](http://msdn.microsoft.com/library/windows/desktop/ms680621).  
  
 **show** \(facoltativo\)  
 Visualizza il valore di byte corrente per l'allineamento di compressione.  Il valore viene visualizzato da un messaggio di avviso.  
  
 **push** \(facoltativo\)  
 Inserisce il valore di allineamento della compressione corrente dello stack del compilatore interno e imposta il valore di allineamento di compressione corrente su `n`.  Se `n` non viene specificato, viene inserito il valore di allineamento di compressione corrente.  
  
 **pop** \(facoltativo\)  
 Rimuove il record dall'inizio dello stack del compilatore interno.  Se `n` non viene specificato con **pop**, il valore di compressione associato al record risultante in cima allo stack è il nuovo valore di allineamento di compressione.  Se si specifica `n`, ad esempio, `#pragma pack(pop, 16)`, `n` diventa il nuovo valore di allineamento di compressione.  Se si estrae con `identifier`, ad esempio, `#pragma pack(pop, r1)`, tutti i record dello stack vengono estratti finché non viene trovato il record che ha `identifier`.  Tale record viene estratto e il valore di compressione associato al record risultante in cima allo stack è il nuovo valore di allineamento di compressione.  Se si estrae con un `identifier` non trovato in alcun record nello stack, **pop** viene ignorato.  
  
 `identifier` \(facoltativo\)  
 Se usato con **push**, assegna un nome al record nello stack del compilatore interno.  Se usato con **pop**, estrae record dallo stack interno finché non viene rimosso `identifier`; se `identifier` non viene trovato nello stack interno, nulla viene estratto.  
  
 `n` \(facoltativo\)  
 Consente di specificare il valore, in byte, da utilizzare per la compressione.  Se l'opzione del compilatore [\/Zp](../build/reference/zp-struct-member-alignment.md) non è impostata per il modulo, il valore predefinito di `n` è 8.  Tra i valori validi sono compresi 1, 2, 4, 8 e 16.  L'allineamento di un membro sarà su un limite ossia un multiplo di `n` o un multiplo della dimensione del membro, qualunque sia il minore.  
  
 `#pragma pack(pop,` `identifier``,` `n``)` è non definito.  
  
 Per ulteriori informazioni sulla modifica dell'allineamento, vedere questi argomenti:  
  
-   [\_\_alignof](../cpp/alignof-operator.md)  
  
-   [align](../cpp/align-cpp.md)  
  
-   [\_\_unaligned](../cpp/unaligned.md)  
  
-   [Esempi di allineamento di strutture](../build/examples-of-structure-alignment.md) \(specifico per x64\)  
  
    > [!WARNING]
    >  Si noti che in Visual Studio 2015 e versioni successive è possibile usare gli operatori standard alignas e alignof, che, a differenza di `__alignof` e `declspec( align )`, sono portabili tra compilatori.  Lo standard C\+\+ non contempla la compressione, dunque per specificare allineamenti inferiori rispetto alla dimensione parola dell'architettura di destinazione è necessario usare `pack` \(o l'estensione corrispondente in altri compilatori\).  
  
## Esempio  
 L'esempio seguente mostra come utilizzare il pragma `pack` per modificare l'allineamento di una struttura.  
  
```  
// pragma_directives_pack.cpp  
#include <stddef.h>  
#include <stdio.h>  
  
struct S {  
   int i;   // size 4  
   short j;   // size 2  
   double k;   // size 8  
};  
  
#pragma pack(2)  
struct T {  
   int i;  
   short j;  
   double k;  
};  
  
int main() {  
   printf("%zu ", offsetof(S, i));  
   printf("%zu ", offsetof(S, j));  
   printf("%zu\n", offsetof(S, k));  
  
   printf("%zu ", offsetof(T, i));  
   printf("%zu ", offsetof(T, j));  
   printf("%zu\n", offsetof(T, k));  
}  
```  
  
```  
0 4 8  
0 4 6  
```  
  
## Esempio  
 Nell'esempio seguente viene illustrato come utilizzare la sintassi **push**, **pop** e **show**.  
  
```  
// pragma_directives_pack_2.cpp  
// compile with: /W1 /c  
#pragma pack()   // n defaults to 8; equivalent to /Zp8  
#pragma pack(show)   // C4810  
#pragma pack(4)   // n = 4  
#pragma pack(show)   // C4810  
#pragma pack(push, r1, 16)   // n = 16, pushed to stack  
#pragma pack(show)   // C4810  
#pragma pack(pop, r1, 2)   // n = 2 , stack popped  
#pragma pack(show)   // C4810  
```  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)