---
title: 'Procedura: Definire e installare un gestore eccezioni globale'
ms.date: 11/04/2016
helpviewer_keywords:
- handlers, global
ms.assetid: dd88a812-3bc7-4ce8-8283-4b674c246534
ms.openlocfilehash: d1b8452d19172bf16817c36032189accfd855539
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58777208"
---
# <a name="how-to-define-and-install-a-global-exception-handler"></a>Procedura: Definire e installare un gestore eccezioni globale

L'esempio di codice seguente illustra le eccezioni non gestite come possono essere acquisite. Il form di esempio contiene un pulsante che, quando premuti, esegue un riferimento null, causando un'eccezione generata. Questa funzionalità rappresenta un errore di codice tipico. L'eccezione viene intercettata dal gestore di eccezioni a livello di applicazione installato per la funzione principale.

Questa operazione viene eseguita associando un delegato per il <xref:System.Windows.Forms.Application.ThreadException> evento. In questo caso, eccezioni successive vengono quindi inviate per la `App::OnUnhandled` (metodo).

## <a name="example"></a>Esempio

```
// global_exception_handler.cpp
// compile with: /clr
#using <system.dll>
#using <system.drawing.dll>
#using <system.windows.forms.dll>

using namespace System;
using namespace System::Threading;
using namespace System::Drawing;
using namespace System::Windows::Forms;

ref class MyForm : public Form
{
   Button^ b;
public:
   MyForm( )
   {
      b = gcnew Button( );
      b->Text = "Do Null Access";
      b->Size = Drawing::Size(150, 30);
      b->Click += gcnew EventHandler(this, &MyForm::OnClick);
      Controls->Add(b);
   }
   void OnClick(Object^ sender, EventArgs^ args)
   {
      // do something illegal, like call through a null pointer...
      Object^ o = nullptr;
      o->ToString( );
   }
};

ref class App
{
public:
   static void OnUnhandled(Object^ sender, ThreadExceptionEventArgs^ e)
   {
      MessageBox::Show(e->Exception->Message, "Global Exeception");
      Application::ExitThread( );
   }
};

int main()
{
   Application::ThreadException += gcnew
      ThreadExceptionEventHandler(App::OnUnhandled);

   MyForm^ form = gcnew MyForm( );
   Application::Run(form);
}
```

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni](../extensions/exception-handling-cpp-component-extensions.md)
