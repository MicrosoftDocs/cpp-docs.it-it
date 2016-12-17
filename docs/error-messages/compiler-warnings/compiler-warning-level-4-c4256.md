---
title: "Avviso del compilatore (livello 4) C4256 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4256"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4256"
ms.assetid: a755a32e-895a-4837-a2b5-4ea06b736798
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4256
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': il costruttore di una classe con basi virtuali ha '...'. Le chiamate potrebbero non essere compatibili con precedenti versioni di Visual C\+\+.  
  
 Possibile incompatibilità.  
  
 Si consideri il codice di esempio seguente.  Se la definizione del costruttore S2::S2 \(int i,... \) è stata compilata con una versione del compilatore di Visual C\+\+ precedenti alla versione 7, ma il seguente esempio viene compilato mediante la versione corrente, la chiamata al costruttore per S3 non funzionerà correttamente a causa di una modifica della convenzione di chiamata speciale.  Utilizzando Visual C\+\+ 6.0, in entrambi i casi la chiamata non funziona comunque, a meno che non venga passato alcun parametro per i puntini di sospensione.  
  
 Per risolvere il problema,  
  
1.  Non utilizzare i puntini di sospensione in un costruttore.  
  
2.  Assicurarsi che tutti i componenti del progetto vengano compilati con la versione corrente, incluse le eventuali librerie che definiscono o fanno riferimento a questa classe, quindi disabilitare l'avviso utilizzando il pragma [warning](../../preprocessor/warning.md).  
  
 Il seguente codice di esempio genera l'errore C4256:  
  
```  
// C4256.cpp  
// compile with: /W4  
// #pragma warning(disable : 4256)  
struct S1  
{  
};  
  
struct S2: virtual public S1  
{  
   S2( int i, ... )    // C4256  
   {  
      i = 0;  
   }  
   /*  
   // try the following line instead  
   S2( int i)  
   {  
      i = 0;  
   }  
   */  
};  
  
void func1()  
{  
   S2 S3( 2, 1, 2 );   // C4256  
   // try the following line instead  
   // S2 S3( 2 );  
}  
  
int main()  
{  
}  
```