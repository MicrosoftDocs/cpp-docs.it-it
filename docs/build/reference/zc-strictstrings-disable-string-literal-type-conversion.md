---
title: "/Zc:strictStrings (Disabilitare la conversione del tipo di valore letterale stringa) | Microsoft Docs"
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
  - "/Zc:strictStrings"
  - "strictStrings"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Zc (opzioni del compilatore) (C++)"
  - "/Zc:strictStrings"
  - "strictStrings"
  - "Zc (opzioni del compilatore) (C++)"
  - "-Zc (opzioni del compilatore) (C++)"
ms.assetid: b7eb3f3b-82c1-48a2-8e63-66bad7397b46
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Zc:strictStrings (Disabilitare la conversione del tipo di valore letterale stringa)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando specificato, il compilatore richiede la stretta conformità con la qualificazione `const` per i puntatori inizializzati mediante valori letterali di stringa.  
  
## Sintassi  
  
```  
/Zc:strictStrings[-]  
```  
  
## Note  
 Se si specifica **\/Zc:strictStrings**, il compilatore impone le qualificazioni standard C\+\+ `const` per i valori letterali di stringa, come tipo "matrice di `const` `char`" o "matrice di `const` `wchar_t`", in base alla dichiarazione.  I valori letterali di stringa non sono modificabili e un tentativo di modificare il contenuto di uno di questi valori provoca un errore di violazione di accesso in fase di esecuzione.  È necessario dichiarare un puntatore di stringa come `const` per inizializzarlo mediante un valore letterale di stringa o usare un oggetto `const_cast` per inizializzare un puntatore non `const`.  Per impostazione predefinita o se è specificato **\/Zc:strictStrings\-**, il compilatore non impone le qualificazioni standard C\+\+ `const` per i puntatori di stringa inizializzati mediante valori letterali di stringa.  
  
 Usare l'opzione **\/Zc:strictStrings** per evitare la compilazione di codice errato.  Questo esempio mostra in che modo un semplice errore di dichiarazione provoca un arresto anomalo in fase di esecuzione:  
  
```cpp  
// strictStrings_off.cpp  
// compile by using: cl /W4 strictStrings_off.cpp  
int main() {  
   wchar_t* str = L"hello";  
   str[2] = L'a'; // run-time error: access violation  
}  
```  
  
 Quando l'opzione **\/Zc:strictStrings** è abilitata, lo stesso codice segnala un errore nella dichiarazione di `str`.  
  
```cpp  
// strictStrings_on.cpp  
// compile by using: cl /Zc:strictStrings /W4 strictStrings_on.cpp  
int main() {  
   wchar_t* str = L"hello"; // error: Conversion from string literal   
   // loses const qualifier  
   str[2] = L'a';   
}  
```  
  
 Se si usa `auto` per dichiarare un puntatore di stringa, il compilatore crea automaticamente la dichiarazione del tipo di puntatore `const` corretta.  Il tentativo di modificare il contenuto di un puntatore `const` viene segnalato dal compilatore come errore.  
  
> [!NOTE]
>  La Libreria C\+\+ standard in [!INCLUDE[cpp_dev12_long](../../build/reference/includes/cpp_dev12_long_md.md)] non supporta l'opzione del compilatore **\/Zc:strictStrings** nelle build di debug.  Se l'output di compilazione contiene svariati errori [C2665](../../error-messages/compiler-errors-2/compiler-error-c2665.md), la causa può essere questa.  
  
 Per altre informazioni sui problemi di conformità in Visual C\+\+, vedere [Comportamento non standard](../../cpp/nonstandard-behavior.md).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **C\/C\+\+**.  
  
3.  Selezionare la pagina delle proprietà **Riga di comando**.  
  
4.  Modificare la proprietà **Opzioni aggiuntive** in modo da includere `/Zc:strictStrings`, quindi fare clic su **OK**.  
  
## Vedere anche  
 [\/Zc \(Conformità\)](../../build/reference/zc-conformance.md)