---
title: Dichiarazione di proprietà indice | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- indexers
- default indexers
- defaults, indexers
- indexed properties, C++
ms.assetid: d898fdbc-2106-4b6a-8c5c-9f511d80fc2f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 76473ce04cdf5860476b7612ddcbf00b40a0fae1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33160836"
---
# <a name="property-index-declaration"></a>Dichiarazione degli indici di proprietà
La sintassi per la dichiarazione di una proprietà indicizzata è stata modificata dalle estensioni gestite per C++ a Visual C++.  
  
 Il principale limite del supporto lingua estensioni gestite di proprietà indicizzate è l'impossibilità di fornire l'indice a livello di classe; vale a dire tutte le proprietà indicizzate devono avere un nome e pertanto non è, ad esempio, per fornire un operatore di indice gestito che può essere applicato direttamente a un `Vector` o `Matrix` oggetto della classe. Un secondo meno punti deboli è che visivamente difficile distinguere una proprietà da una proprietà indicizzata, il numero di parametri è l'unica indicazione. Infine, le proprietà indicizzate subiscono gli stessi problemi come quelli di proprietà non indicizzate, le funzioni di accesso non vengono considerati come un'unità atomica, ma separate in singoli metodi.  Ad esempio:  
  
```  
public __gc class Vector;  
public __gc class Matrix {  
   float mat[,];  
  
public:   
   __property void set_Item( int r, int c, float value);  
   __property float get_Item( int r, int c );  
  
   __property void set_Row( int r, Vector* value );  
   __property Vector* get_Row( int r );  
};  
```  
  
 Come può notare, gli indicizzatori si distinguono solo per i parametri aggiuntivi per specificare due o singolo indice della dimensione. Nella nuova sintassi, gli indicizzatori sono racchiusi tra parentesi quadre ([,]) dopo il nome dell'indicizzatore e che indica il numero e tipo di ogni indice:  
  
```  
public ref class Vector {};  
public ref class Matrix {  
private:  
   array<float, 2>^ mat;  
  
public:  
   property float Item [int,int] {  
      float get( int r, int c );  
      void set( int r, int c, float value );  
   }  
  
   property Vector^ Row [int] {  
      Vector^ get( int r );  
      void set( int r, Vector^ value );  
   }  
};  
```  
  
 Per indicare un indicizzatore di livello di classe che può essere applicato direttamente agli oggetti della classe nella nuova sintassi, il `default` parola chiave viene riutilizzato in sostituzione di un nome esplicito. Ad esempio:  
  
```  
public ref class Matrix {  
private:  
   array<float, 2>^ mat;  
  
public:  
   // ok: class level indexer now  
   //  
   //     Matrix mat;  
   //     mat[ 0, 0 ] = 1;   
   //  
   // invokes the set accessor of the default indexer  
  
   property float default [int,int] {  
      float get( int r, int c );  
      void set( int r, int c, float value );  
   }  
  
   property Vector^ Row [int] {  
      Vector^ get( int r );  
      void set( int r, Vector^ value );  
   }  
};  
```  
  
 Nella nuova sintassi, quando il valore predefinito è indicizzato proprietà viene specificata, i due seguenti nomi sono riservati: `get_Item` e `set_Item`. Questo avviene perché questi sono i nomi sottostanti generati per la proprietà indicizzata predefinita.  
  
 Si noti che non è disponibile alcun indice semplice sintassi analoga alla sintassi di proprietà semplice.  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di membri in una classe o interfaccia (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 