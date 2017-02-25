---
title: "Operatore __alignof | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__alignof"
  - "alignof"
  - "alignas"
  - "__alignof_cpp"
  - "alignof_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__alignof (parola chiave) [C++]"
  - "alignas"
  - "allineamento di strutture"
  - "alignof"
  - "tipi [C++], requisiti di allineamento"
ms.assetid: acb1eed7-6398-40bd-b0c5-684ceb64afbc
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Operatore __alignof
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In C\+\+11 è stato introdotto l'operatore `alignof`, che restituisce l'allineamento, in byte, del tipo specificato.  Per garantire la massima portabilità, è consigliabile usare l'operatore alignof invece dell'operatore \_\_alignof specifico di Microsoft.  
  
 **Sezione specifica Microsoft**  
  
 Viene restituito un valore di tipo **size\_t**, ovvero il requisito di allineamento del tipo.  
  
## Sintassi  
  
```  
  
        __alignof(   
   type    
)  
```  
  
## Note  
 Ad esempio:  
  
|Espressione|Valore|  
|-----------------|------------|  
|**\_\_alignof\( char \)**|1|  
|**\_\_alignof\( short \)**|2|  
|**\_\_alignof\( int \)**|4|  
|**\_\_alignof\( \_\_int64 \)**|8|  
|**\_\_alignof\( float \)**|4|  
|**\_\_alignof\( double \)**|8|  
|**\_\_alignof\( char\* \)**|4|  
  
 Il valore `__alignof` è uguale al valore di `sizeof` per i tipi di base.  Si consideri, in ogni caso, il seguente esempio:  
  
```  
typedef struct { int a; double b; } S;  
// __alignof(S) == 8  
```  
  
 In questo caso, il valore `__alignof` è il requisito di allineamento dell'elemento più grande presente nella struttura.  
  
 Analogamente, per  
  
```  
typedef __declspec(align(32)) struct { int a; } S;  
```  
  
 `__alignof(S)` è uguale a `32`.  
  
 Un utilizzo di `__alignof` sarebbe quello di parametro per una delle proprie routine di allocazione della memoria.  Ad esempio, data la seguente struttura definita `S`, si potrebbe chiamare una routine di allocazione della memoria denominata `aligned_malloc` per allocare memoria su un particolare limite di allineamento.  
  
```  
typedef __declspec(align(32)) struct { int a; double b; } S;  
int n = 50; // array size  
S* p = (S*)aligned_malloc(n * sizeof(S), __alignof(S));  
```  
  
 Per altre informazioni sulla modifica dell'allineamento, vedere:  
  
-   [pack](../preprocessor/pack.md)  
  
-   [align](../cpp/align-cpp.md)  
  
-   [\_\_unaligned](../cpp/unaligned.md)  
  
-   [\/Zp \(Allineamento membri struct\)](../build/reference/zp-struct-member-alignment.md)  
  
-   [Esempi di allineamento di strutture](../build/examples-of-structure-alignment.md) \(specifico per x64\)  
  
 Per altre informazioni sulle differenze nell'allineamento nel codice per x86 e x64, vedere:  
  
-   [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)