---
title: "Dichiarazione degli indici di propriet&#224; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "indicizzatori predefiniti"
  - "impostazioni predefinite, indicizzatori"
  - "proprietà indicizzate, C++"
  - "indicizzatori"
ms.assetid: d898fdbc-2106-4b6a-8c5c-9f511d80fc2f
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Dichiarazione degli indici di propriet&#224;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La sintassi per la dichiarazione di una proprietà indicizzata è stata modificata in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Il principale limite del supporto delle proprietà indicizzate nelle estensioni gestite è l'incapacità di fornire indici a livello di classe. In altre parole, tutte le proprietà indicizzate devono avere un nome e non è possibile, ad esempio, fornire un operatore di indice gestito applicabile direttamente a un oggetto della classe `Vector` o `Matrix`.  Un ulteriore limite, benché meno significativo, è la difficoltà visiva di distinguere le proprietà dalle proprietà indicizzate, poiché l'unica differenza è data dal numero dei parametri.  Nelle proprietà indicizzate, infine, come nelle proprietà non indicizzate, le funzioni di accesso non vengono trattate come unità atomica, ma separate in singoli metodi.  Di seguito è riportato un esempio.  
  
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
  
 Gli indicizzatori si distinguono solo per i parametri aggiuntivi che specificano indici a una o due dimensioni.  Nella nuova sintassi, gli indicizzatori sono racchiusi tra parentesi quadre \(\[,\]\) dopo il nome dell'indicizzatore e con l'indicazione del numero e del tipo di ciascun indice:  
  
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
  
 Per indicare un indicizzatore a livello di classe applicabile direttamente agli oggetti della classe nella nuova sintassi, viene riutilizzata la parola chiave `default` in sostituzione di un nome esplicito.  Di seguito è riportato un esempio.  
  
```  
public ref class Matrix {  
private:  
   array<float, 2>^ mat;  
  
public:  
   // ok: class level indexer now  
   //  
   //     Matrix mat …  
   //     mat[ 0, 0 ] = 1;   
   //  
   // invokes the set accessor of the default indexer …  
  
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
  
 Nella nuova sintassi, quando viene specificata la proprietà predefinita indicizzata, i due seguenti nomi sono riservati: `get_Item` e `set_Item`,  perché si tratta dei nomi sottostanti generati per la proprietà indicizzata predefinita.  
  
 Tenere presente che non è disponibile una sintassi di indice semplice analoga alla sintassi di proprietà semplice.  
  
## Vedere anche  
 [Dichiarazioni di membri in una classe o interfaccia \(C\+\+\/CLI\)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)   
 [Procedura: utilizzare proprietà indicizzate](../misc/how-to-use-indexed-properties.md)